var a, b, sum, difference, product, quotient, modulus;

//Get values from text input fields as integers
function getInputs() {
    a = parseInt(document.getElementById("numberA").value);
    b = parseInt(document.getElementById("numberB").value);
}

//Add result to a new row on the table
function newRow(result) {
    var table = document.getElementById("myTable");

    var row = table.insertRow(0);
    var cell1 = row.insertCell(0);

    cell1.innerHTML = result;
      }

//Addition
function add() {
    getInputs();
    sum = a+b;
    result = a+" + "+b+" = "+sum;
    newRow(result);
}

//Subtraction
function subtract() {
    getInputs();
    difference = a-b;
    result = a+" - "+b+" = "+difference;
    newRow(result);
}

//Multiplication
function multiply() {
    getInputs();
    product = a*b;
    result = a+" x "+b+" = "+product;
    newRow(result);
}

//Division with remainder
function divideRemainder() {
    getInputs();
    quotient = Math.floor(a/b);
    modulus = a%b;
    result = a+" ÷ "+b+" = "+quotient+" with a remainder of "+modulus;
    newRow(result);
}

//Division with decimal point
function divideFloat() {
    a = parseFloat(document.getElementById("numberA").value);
    b = parseFloat(document.getElementById("numberB").value);
    quotient = a/b;
    result = a+" ÷ "+b+" = "+quotient;
    newRow(result);
    }
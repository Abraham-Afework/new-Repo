#include<stdio.h>
#include<stdlib.h>
/**
 * main - outputs the name of the program
 *
 * @argc: the number of values entered in command line
 * @argv: the string value of the enterd in command line
 *
 * Return: 0
 *
 */
void print_number(int num);
int main(int argc, char *argv[])
{
	/* i created for iteration */
	int num1,num2, mul;
	char* check_num1, *check_num2;

	if (argc != 3 )
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}
	num1 =strtol((argv[1]), &check_num1, 10);
	num2 =strtol((argv[2]), &check_num2, 10);

	if(*check_num1 != '\0' || *check_num2 != '\0')
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		exit(98);
	}

	mul = num1 * num2;
	print_number(mul);
	return (0);
}
/**
 * print_number -print out numbers
 *
 * @num: the nuber to be printed
 *
 * Description: it will display the number entered
 *
 */
void print_number(int num)
{
        int i, j, k, l, isNegative;
        int integer[100];


        isNegative = 0;
        if (num < 0)
        {
                isNegative = 1;
                num = num * -1;
        }
        if (isNegative == 1)
        {
                putchar('-');
        }
        if (num >= 0  && num < 100)
        {
                i = num / 10;
                j = num % 10;
                if (num > 9)
                {
                        putchar(i + '0');
                }
                putchar(j + '0');
	}
        else if (num >= 100)
        {
                while (num != 0)
                {
                        j = num % 10;
                        num = num / 10;
                        integer[k] = j;
                        k++;
                }
                for (l = k - 1; l >= 0; l--)
                {
                        putchar(integer[l] + '0');
                }
        }
}

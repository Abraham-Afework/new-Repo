#include<stdio.h>
#include<stdlib.h>
int change(int);
int main (int argc,char * argv[])
{
	int i;
	int coins;

	if (argc != 2)
                {
                        printf("Error\n");                                                     return (1);
                }
	coins = change(atoi(argv[1]));
	printf("%d",coins);
			return (0);
}	
int change(int money)
{
     int count,i, j;
     
     count = 0;
     int cents[5] = {25, 10, 5, 2, 1};
      
    for(i = 0; i < 5; i++)
    {
       for(j=0; money >= cents[i]; j++)
          {
		  count++;
		  money -=cents[i];
          }
    }
       return count;
}

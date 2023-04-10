#include <stdio.h>
#include <stdlib.h>

/**
 * main - function  the minimum number of coins
 * to make change.
 * @argc:count arg in cmd line
 * @argv:array pointer to arg
 * Return:0 if no number passed
 *  1 if arg is not digit
 */
int main(int argc, char *argv[])
{
	   int cents, coins = 0;
	   
	   if (argc != 2)
	   {
        	printf("Error\n");
        	return 1;
	   }
	   cents = atoi(argv[1]);
	   
	   while (cents > 0)
	   {
		   switch (cents)
		   {
			   case 25:
			   case 10:
			   case 5:
			   case 2:
				   cents -= cents;
				   coins++;
				   break;
			   default:
			   cents--;
			   coins++;
			   break;
		   }
	   }
	   printf("%d\n", coins);
	   return (0);
}


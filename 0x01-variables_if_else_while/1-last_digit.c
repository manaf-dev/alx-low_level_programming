#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the last digit
 * Return: returns 0 after execution
 *
 * Descrition: check and dsiplays the lst digit of n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n,n%10);
        }
        else if (n < 6 && n != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n,n%10);
        }
        else
	{
                printf("Last digit of %d is %d and is 0\n", n,n%10);
        }
	return (0);
}

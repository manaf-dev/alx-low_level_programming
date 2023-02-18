#include <stdio.h>
/**
 * main - outputs base 10 numbers
 * Return: 0 is returned
 *
 * Destription: print numbers less than 10
 */
int main(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}

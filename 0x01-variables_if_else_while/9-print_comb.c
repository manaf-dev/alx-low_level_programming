#include <stdio.h>
/**
 * main - number combination
 * Return: 0 is returned
 *
 * Description: combine numbers
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

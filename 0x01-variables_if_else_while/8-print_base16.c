#include <stdio.h>
/**
 * main - print base 16 numbers
 * Return: 0 is returned
 *
 * Description: base 16 in lowercase
 */
int main(void)
{
	int num;
	int letter = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

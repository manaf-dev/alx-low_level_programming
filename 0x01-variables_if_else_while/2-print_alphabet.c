#include <stdio.h>
/**
 * main - outputs lower alphabets
 * Return: 0 is returned
 *
 * Destription: print alphabets
 */
int main(void)
{
	int letter = "a";
	do
	{
		putchar(letter);
		letter++;
	}while (letter <= "z");

	putchar("\n");

	return 0;
}

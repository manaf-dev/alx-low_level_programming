#include <stdio.h>
/**
 * main - outputs lower alphabets except p and e
 * Return: 0 is returned
 *
 * Destription: print alphabets except p / e
 */
int main(void)
{
	int letter = 'a';

	do {
		if (letter != 'p' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}

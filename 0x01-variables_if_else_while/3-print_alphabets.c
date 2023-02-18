#include <stdio.h>
/**
 * main - outputs lower and upper alphabets
 * Return: 0 is returned
 *
 * Destription: print alphabets
 */
int main(void)
{
	int letter_1 = 'a';
	int letter_2 = 'A';

	do {
		putchar(letter_1);
		letter_1++;
	} while (letter_1 <= 'z');

	do {
		putchar(letter_2);
		letter_2++;
	} while (letter_2 <= 'Z');
	putchar('\n');
	return (0);
}

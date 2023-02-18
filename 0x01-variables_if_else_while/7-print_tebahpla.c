#include <stdio.h>
/**
 * main - print alphabets in reverse
 * Return: 0 is returned
 *
 * Description: alphabets in reverse order
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - print _putchar with a newline afterwards
 * Return: should return 0
 *
 * Description: printing '_putchar'
 */

int main(void)
{
	putchar(_putchar());
	putchar('\n');
	return 0;
}

int _putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
}

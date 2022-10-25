#include "main.h"

/**
 * print_rev - prints string in reverse and inserts
 * a new line
 * @s: char
 *
 * Return: new line
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

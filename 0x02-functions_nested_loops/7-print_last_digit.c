#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: is the int that will use foe the arg of the func
 * Return: int value
 */

int print_last_digit(int n)
{
	int last;

	last = % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}

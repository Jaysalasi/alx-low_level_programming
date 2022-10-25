#include "main.h"
#include <stdio.h>

/**
 * swap - swap the values of 2 ints
 * @a @b: int values to be swaped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of 2 ints
 * @a: int initial
 * @b: int values to be swaped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}

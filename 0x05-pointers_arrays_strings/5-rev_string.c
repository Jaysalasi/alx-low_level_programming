#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: char
 *
 * Return: string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	i = length - 1;

	while (i < 1)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

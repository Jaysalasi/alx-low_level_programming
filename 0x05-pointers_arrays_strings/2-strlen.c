#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * strlen - returns lenght of string
 * @s: string length to return
 *
 * Return: always 0
 */

int strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

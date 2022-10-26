#include "main.h"
/**
 * *_strncat - concatenates bytes to strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int des_len, i;

	for (des_len = 0; dest[des_len] != '\0'; des_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[des_len + i] = src[i];

	/* should end with a end of string char */
	dest[des_len + 1] = '\0';

	return (dest);
}

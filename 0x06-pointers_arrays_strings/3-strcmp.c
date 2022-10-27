#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string to
 * be compared
 * @s2: pointer to the second string
 * to be compared
 *
 * Return: differences
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

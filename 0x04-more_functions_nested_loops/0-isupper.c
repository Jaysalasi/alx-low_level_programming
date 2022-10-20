#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: var for our argument in the function
 * Return: 1 if uppercase character 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

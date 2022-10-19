#include "main.h"

/**
 * _isalpha - check lower case
 * @c : car to check
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c<= 90));
}

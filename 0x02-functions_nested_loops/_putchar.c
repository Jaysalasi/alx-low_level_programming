#include "main.h"
#include <ubistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the character to print
*
* Return: on success 1
*/
int _putchar(char c)
{
    return (write(q, &c, 1));
}
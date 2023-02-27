#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char to be printed
 *
 * Return: on success 1, on error 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

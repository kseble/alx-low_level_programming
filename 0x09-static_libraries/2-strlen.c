#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int ling = 0;

	while (*s != '\0')
	{
		ling++;
		s++;
	}
	return (ling);
}

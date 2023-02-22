#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: print all numbers of base 16
 * followed with a new line
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

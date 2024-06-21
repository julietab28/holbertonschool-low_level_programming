#include "main.h"

/**
 * print_rev - check the code
 * @s: char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len;
	int lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}

	for (len = lent; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

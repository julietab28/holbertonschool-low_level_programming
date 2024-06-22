#include "main.h"

/**
 * puts2 - check the code
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}

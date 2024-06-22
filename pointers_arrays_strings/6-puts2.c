#include "main.h"

/**
 * puts2 - check the code
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] <= '\0'; i = i + 2)
	{
		_putchar(i);
	}
	_putchar('\n');
}

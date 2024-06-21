#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char c;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2 - 1; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}

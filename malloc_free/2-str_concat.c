#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenar s1 con s2
 * @s1: string 1
 * @s2: string2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, x, i;
	int y = 0;
	char *str_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] <= '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}

	str_concat = malloc((len1 + len2) + (1  * sizeof(char)));

	if (str_concat == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= len1; x++)
	{
		str_concat[x] = s1[x];
		y++;
	}
	for (i = 0; i <= len2; i++)
	{
		str_concat[y] = s2[i];
	}

	return (str_concat);
}

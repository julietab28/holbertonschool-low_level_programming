#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copiar una cadena de caracteres a otra
 * @str: cadena de caracteres a copiar
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int len, i;
	char *str_2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{

	}
		str_2 = malloc(len + 1 * sizeof(char));

	if (str_2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str_2[i] = str[i];
	}
		i++;
		str_2[i] = '\0';

	return (str_2);
}

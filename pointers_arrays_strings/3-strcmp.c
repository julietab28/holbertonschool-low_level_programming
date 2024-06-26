#include "main.h"
/**
 * _strcmp - funcion de comparacion de cadenas de caracteres
 * @s1: cadena de char
 * @s2: cadena de char
 * Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] != '\0')
		{
			return (-s2[i]);
		}
		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			return (s2[i]);
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}

	return (0);
}

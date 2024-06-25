#include "main.h"
/**
 * _strcat - escribe la funcion que concate dos cadenas
 * @dest: cadena 1
 * @src: cadena 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}
	dest[x + i] = '\0';
	return (dest);
}

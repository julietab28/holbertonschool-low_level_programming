#include "main.h"
#include <string.h>
/**
 * *_strcpy - check the code
 * @dest: char
 * @src: char
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';

	return (dest);
}

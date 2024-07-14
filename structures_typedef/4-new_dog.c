#include <stdio.h>
#include "dog.h"
#include "2-strncpy.c"
#include <stdlib.h>
/**
 * new_dog - funcion para crear un nuevo perro
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perrito;
	char *nombre, *duenio;
	int len1, len2;

	perrito = malloc(sizeof(dog_t));
	if (perrito == NULL)
	{
		free(perrito);
		return (NULL);
	}

	for (len1 = 0; name[len1] != '\0'; len1++)
	for (len2 = 0; owner[len2] != '\0'; len2++)

	nombre = malloc(sizeof(len1));
	if (nombre == NULL)
	{
		free(perrito);
		return (NULL);
	}

	duenio = malloc(sizeof(len2));
	if (duenio == NULL)
	{
		free(perrito);
		return (NULL);
	}

	perrito = malloc(sizeof(char) * (len1 + len2));

	perrito->name = _strncpy(nombre, name, len1);
	perrito->age = age;
	perrito->owner = _strncpy(duenio, owner, len2);
	return (perrito);
}


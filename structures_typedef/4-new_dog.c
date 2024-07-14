#include <stdio.h>
#include "dog.h"
#include "2-strncpy.c"
#include <string.h>
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
	int len1 = strlen(name);
	int len2 = strlen(owner);

	nombre = malloc(sizeof(char) * (len1 + 1));
	if (nombre == NULL)
	{
		return (NULL);
	}

	duenio = malloc(sizeof(char) * (len2 + 1));
	if (duenio == NULL)
	{
		free(nombre);
		return (NULL);
	}

	_strncpy(nombre, name, len1);
	nombre[len1] = '\0';
	_strncpy(duenio, owner, len2 + 1);
	duenio[len2] = '\0';
	perrito = malloc(sizeof(dog_t));
	if (perrito == NULL)
	{
		free(nombre);
		free(duenio);
		return (NULL);
	}
	perrito->name = nombre;
	perrito->age = age;
	perrito->owner = duenio;

	return (perrito);
}


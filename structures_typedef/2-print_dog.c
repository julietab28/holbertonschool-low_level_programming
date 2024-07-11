#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: dog
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}

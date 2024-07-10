#include <stddef.h>
#include "dog.h"
/**
 * init_dog - dog
 * @d: struct dog
 * @name: nombre
 * @age: edad
 * @owner: propietario
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

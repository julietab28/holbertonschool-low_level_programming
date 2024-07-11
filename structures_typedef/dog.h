#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define una estructura dog con diferentes tipos de datos
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

struct dog_t
{
	char *name;
	float age;
	char *owner;
};
#endif
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int x;

	char *array;
	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);

}

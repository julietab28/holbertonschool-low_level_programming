#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print the elements of a list and return the numebr of nodes.
 * @h: Pointer to the list
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{	printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}

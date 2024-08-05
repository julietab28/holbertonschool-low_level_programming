#include "lists.h"

/**
 * list_len - Return the number of nodes
 * @h: Pointer to the list
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

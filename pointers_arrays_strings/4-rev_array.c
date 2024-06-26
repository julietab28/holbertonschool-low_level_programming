#include "main.h"

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;
	int x;

	for (i = n - 1; i < n / 2; i++)
	{
		x = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = x;
	}
}

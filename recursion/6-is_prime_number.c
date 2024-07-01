#include "main.h"
/**
 * is_prime_number - primo no primo
 * @n: numero
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n / n == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	if (n / 1 == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

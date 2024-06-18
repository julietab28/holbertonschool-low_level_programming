#include "main.h"

/**
 * print_last_digit - check the code
 * @n: numero random
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	n *= -1;

	_putchar(n + '0');
	return (n);

}

#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - suma de enteros
 * @n: numero
 * Return: resultado de la suma
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int result;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(args, unsigned int);
	}
	va_end(args);

	return (result);

	if (n == 0)
	{
		return (0);
	}
}

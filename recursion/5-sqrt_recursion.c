#include "main.h"

/**
 * _sqrt_recursion - raiz cuadrada de un num
 * @n: numero
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_new(n, 0));
	}
}

/**
 * _sqrt_new - raiz cuadrada de un num
 * @x: numero
 * @n: nuermo
 * Return: Always 0
*/

int _sqrt_new(int n, int x)
{

	if ((x * x) != n)
	{
		return (_sqrt_new(n, x++));
	}
	else
	{
		return (x);
	}
}

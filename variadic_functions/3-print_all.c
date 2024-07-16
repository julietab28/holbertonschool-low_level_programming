#include "variadic_functions.h"
#include <stdlib.h>

/**
 * last - imprime una coma y espacio
 * @format: lista de los tipos de args 
 * @i: elemento del array
 */
void last(const char * const format, int i)
{
	if (format[i + 1] != '\0' )
	{
		printf(", ");
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
			case 'c':
				printf("%c", va_args(args, int));
				last(format[i]);	

	}	
}

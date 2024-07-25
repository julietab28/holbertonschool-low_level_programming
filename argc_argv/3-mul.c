#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - cantidad de argumentosss
 * @argc: almacena el numero de argumentos
 * @argv: array de los argumentos
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}

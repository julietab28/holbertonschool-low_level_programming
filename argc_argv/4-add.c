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
	int i, x;
	int sum;

	if (argv[1] == NULL)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (i = 0; argv[i] != '\0'; i++)
		{
			if (argv[i] > '0' && argv[i] < '9')
			{
				sum = atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}
	return (0);
}

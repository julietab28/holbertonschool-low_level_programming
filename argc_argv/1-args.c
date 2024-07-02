#include "main.h"
#include <stdio.h>

/**
 * main - cantidad de argumentosss
 * @argc: int
 * @argv: char
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int x;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		x++;
		printf("%d\n", i);
	}
	return (0);
}

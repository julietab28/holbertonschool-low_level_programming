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
	int x = 0;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		x++;
	}
	printf("%d\n", x - 1);
	return (0);
}

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

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d", i);
	}
	return (0);
}

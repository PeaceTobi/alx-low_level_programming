#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplications of two integer
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)

	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (0);
}

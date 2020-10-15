#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	unsigned long int mul, n1, n2;

	if (argc != 3)
		printf("Error\n");

	n1 = atoi(argv[1]);

	if (n1 == 0 && *argv[1] != 48)
	{
		printf("Error\n");
		exit(98);
	}

	else
	{
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%lu\n", mul);
	}
	return (0);
}

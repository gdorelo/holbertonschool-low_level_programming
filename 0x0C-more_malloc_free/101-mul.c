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
	long int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	if (num1 == 0 && *argv[1] != 48)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = atoi(argv[2]);
	if (num2 == 0 && *argv[2] != 48)
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}

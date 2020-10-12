#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * checkdigits - function to check all the digits in the string
 * @s: string to evaluate
 * Return: 0 if they are not digits and 1 if they are
 */
int checkdigits(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (!isdigit(s[a]))
			return (0);
	}
	return (1);
}
/**
 * main - calculates amount of coins for change
 * @argc: counter
 * @argv: vector
 * Return: Always 0 success and 1 if there is an error
 */
int main(int argc, char **argv)
{
	int c25 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
	int c = 1, tcoins = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (; c < argc; c++)
	{
		if (checkdigits(argv[c]))
		{
			money = atoi(argv[c]);
			for ( ; money >= 25; c25++)
				money -= 25;
			for ( ; money >= 10; c10++)
				money -= 10;
			for ( ; money >= 5; c5++)
				money -= 5;
			for ( ; money >= 2; c2++)
				money -= 2;
			for ( ; money >= 1; c1++)
				money -= 1;
			tcoins = c25 + c10 + c5 + c2 + c1;
		}
		else
		{
			printf("0\n");
			return (0);
		}
	}
	printf("%d\n", tcoins);
	return (0);
}

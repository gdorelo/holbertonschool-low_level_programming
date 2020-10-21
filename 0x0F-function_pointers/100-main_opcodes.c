#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: arg counter
 * @argv: arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < (atoi(argv[1])))
	{
		printf("%02x ", *p);
		i++;
		p++;
	}
	printf("\n");
	return (0);
}

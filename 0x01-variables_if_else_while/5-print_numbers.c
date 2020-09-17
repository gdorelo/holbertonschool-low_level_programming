#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
int b;

while (b < 10) /*while int is less than 10*/
{
printf("%d", b); /*print an integer to stdout*/
b++; /*increment this operation by one until reaching 10*/
}
putchar ('\n'); /*add new line at the end*/
return (0);
}

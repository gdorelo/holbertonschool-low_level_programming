#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
int c; /*not allowed to use char variable*/

c = 48; /*48 corresponds with 0 on ASCII chart*/

while (c <= 57)
{
putchar (c);
c++; /*increment operand by 1 until reaching 57*/
}
putchar ('\n'); /*add new line*/
return (0);
}

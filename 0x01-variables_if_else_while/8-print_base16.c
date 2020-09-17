#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
char a;
char b;

a = 48; /* 48 corresponds with 0 on ASCII chart */
b = 97; /* 97 corresponds with a on ASCII chart */

while (a <= 57) /* 57 corresponds with 9 on ASCII chart*/
{
putchar (a); /* this function will output char starting at 48 */
a++; /* increment putchar operand by 1 until 57 */
}
while (b <= 102) /* 102 corresponds with f on ASCII chart */
{
putchar (b); /* output char starting at 97  */
b++; /* increment putchar operand by 1 until 102 */
}
putchar ('\n');
return (0);
}

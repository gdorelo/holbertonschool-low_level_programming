#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
char c;
char C;

c = 'a'; /*declare char c to be 'a'*/
C = 'A'; /*declare char C to be 'A'*/

while (c <= 'z') /*while 'a' less than 'z'*/
{
putchar (c); /*output a char to stdout */
c++; /*increment this operand by one until reaching z*/
}
while (C <= 'Z') /*while 'A' less than 'Z'*/
{
putchar (C); /*output a char to stdout */
C++; /*increment this operand by one char until reaching 'Z'*/
}
putchar ('\n'); /*add newline at end*/
return (0);
}

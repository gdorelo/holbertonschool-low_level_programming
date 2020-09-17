#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
char c;

c = 'a';
while (c <= 'z')
if (c != 'e' && c != 'q')
{
putchar (c);
c++;
}
else
{
c++;
}
putchar ('\n');
return (0);
}

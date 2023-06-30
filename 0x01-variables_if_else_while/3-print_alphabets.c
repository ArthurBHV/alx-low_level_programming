#include <stdio.h>

/**
 * main - A program that prints the lowercase and uppercase alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
int e;
for (e = 0; e < 26; e++)
{
putchar('a' + e);
}
for (e = 0; e < 26; e++)
{
putchar('A' + e);
}
putchar('\n');
return (0);
}

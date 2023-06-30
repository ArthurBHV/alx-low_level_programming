#include <stdio.h>
/**
 * main - A program that alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
int f;
for (f = 'a'; f <= 'z'; f++)
{
if (f != 'e' && f != 'q')
{
putchar(f);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <string.h>
/**
 * main - A program that prints alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
int letter = 'z';
for (; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

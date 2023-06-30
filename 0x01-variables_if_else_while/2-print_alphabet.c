#include <stdio.h>
/**
 * main - A program to print lowercase alphabets
 * Return: Always 0 (success)
 *
 */
int main(void)
{
char bet = 'a';
while (bet <= 'z')
{
putchar(bet), bet++;
}
putchar('\n');
return (0);
}


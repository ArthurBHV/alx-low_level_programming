#include <stdio.h>

/**
 * main - A program that prints possible combinations with two digits
 *
 * Return: 0 (success)
 */
int main(void)
{
int digit, nextDigit;
for (digit = 0; digit <= 9; digit++)
{
for (nextDigit = digit + 1; nextDigit <= 9; nextDigit++)
{
putchar(digit + '0');
putchar(nextDigit + '0');
if (digit != 8 || nextDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

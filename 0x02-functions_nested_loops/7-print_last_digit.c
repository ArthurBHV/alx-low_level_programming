#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @g: The number to be treated
 * Return: value of the last digit of a number
 */
int print_last_digit(int g)
{
int last_dig;
last_dig = g % 10;
if (last_dig < 0)
{
last_dig = last_dig * -1;
}
_putchar(last_dig + '0');
return (last_dig);
}

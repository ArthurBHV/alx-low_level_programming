#include "main.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, from 0 to 9
 * followed by a new line
 * Return: void
 */
void print_numbers(void)
{
char p;

for (p = '0'; p <= '9'; p++)
{
_putchar(p);
}
_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer.
 * @n: input integer parameter
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
	_putchar('-');
	a = -n;
	}
	else
	{
	a = n;
	}
	if (a / 10 != 0)
	{
	print_number(a / 10);
	}
	_putchar(a % 10 + '0');
}

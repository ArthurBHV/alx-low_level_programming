#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number
 * @g: - the character to be checked
 * Return: 1 for positive number returns -1 for negative number and 0 otherwise
 */
int print_sign(int g)
{
	if (g > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (g < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

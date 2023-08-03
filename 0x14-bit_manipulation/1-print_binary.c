#include <stdio.h>
#include "main.h"

/**
 * print_binary - Write a function that prints the binary
 * representation of a number
 * @n: number to print as binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}

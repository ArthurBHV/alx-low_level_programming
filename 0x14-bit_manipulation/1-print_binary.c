#include "main.h"
#include <stdio.h>

/**
 * print_binary - Write a function that prints the binary
 * representation of a number.
 * @n: integer n
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int binary = 0;
	int printed = 0;

	while (bit > 0)
	{
		if (n & (1L << (bit - 1)))
		{
			putchar('1');
			binary++;
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		bit--;
	}
	if (!printed)
	{
		putchar('0');
	}
}

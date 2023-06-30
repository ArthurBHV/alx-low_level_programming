#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9
 * followed by new line
 * Do not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int f = 0;

	for (; f <= 9; f++)
	{
		if (f == 2 || f == 4)
		{
			continue;
		}
		else
		{
			_putchar(f + '0');
		}
	}
	_putchar('\n');
}

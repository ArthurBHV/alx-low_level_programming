#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
	int f;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f < n; f++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print the lines
 * Return: empty
 */
void print_diagonal(int n)
{
	int k = 0;
	int l = 0;

	if (n > 0)
	{
		while (k < n)
		{
			while (l < k)
			{
				_putchar(' ');
				l++;
			}
			k++;
			l = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers followed by a new line
 * @a: array of integers
 * @n: elements to be printed
 * Return: empty
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", b[a]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

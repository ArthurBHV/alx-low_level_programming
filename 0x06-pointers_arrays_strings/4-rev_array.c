#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Array of intergers to be reversed
 * @n: Number of elements in the array
 * Return: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int x, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		x = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = x;
	}
}

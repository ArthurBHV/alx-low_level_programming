#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

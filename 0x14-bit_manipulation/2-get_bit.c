#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Write a function that returns the value
 * of a bit at a given index
 *
 * @n: integer or value
 * @index: index
 * Return: value of the bit index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}

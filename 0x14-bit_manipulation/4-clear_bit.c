#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - Write a function that sets the value of
 * a bit to 0 at a given index.
 * @index: index position
 * @n: The integer to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1uL << index);
	return (1);
}

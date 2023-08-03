#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @m: second integer or destination
 * @n: First integer to be flipped
 * Return: number to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
		{
			num++;
		}
		diff >>= 1;
	}
	return (num);
}

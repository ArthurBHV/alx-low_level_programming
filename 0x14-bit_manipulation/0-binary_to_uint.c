#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int.
 * @b: The string with binary number
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}

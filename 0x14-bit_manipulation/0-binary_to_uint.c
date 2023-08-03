#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int val = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		val <<= 1;
		if (b[i] == '1')
			val += 1;
		i++;
	}
	return (val);
}

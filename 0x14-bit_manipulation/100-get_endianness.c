#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int value;

	value = 1;
	if (*(char *)&value == 1)
		return (1);
	else
		return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

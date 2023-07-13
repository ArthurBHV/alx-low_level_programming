#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: Bytes to be allocated
 *
 * Return: A pointer allocated to memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (0)
	{
		exit(98);
	}
	return (ptr);
}

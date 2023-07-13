#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory of an array using malloc.
  * @size: size of elements of the array.
  * @nmemb: Number of elements in array.
  *
  * Return: NULL if size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(ptr) + a) = 0;
	}

	return (ptr);
}

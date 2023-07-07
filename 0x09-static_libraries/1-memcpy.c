#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination string
 * @src: source string
 * @n: number of bytes copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}

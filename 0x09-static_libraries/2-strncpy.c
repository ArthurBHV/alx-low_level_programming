#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: Stores the string copy
 * @src: Source
 * @n: Number of bytes copied
 * Return: The length of the copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, source_length = 0;

	while (src[index++])
		source_length++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = source_length; index < n; index++)
		dest[index] = '\0';
	return (dest);
}

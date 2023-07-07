#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: appended string
 * @src: String appended to dest
 * @n: Number of of bytes to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destination_len = 0;

	while (dest[index++])
		destination_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[destination_len++] = src[index];
	return (dest);
}

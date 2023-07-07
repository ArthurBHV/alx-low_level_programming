#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer 1
 *@src: A pointer 2
 *@n: value to be
 *Return: destination
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

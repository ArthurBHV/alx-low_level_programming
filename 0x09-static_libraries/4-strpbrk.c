#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string
 * @s: string to be searched
 * @accept: bytes to be allowed
 * Return: pointer to be the byte that matches accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
			if (*s == accept[a])
				return (s);
		s++;
	}
	return (NULL);
}

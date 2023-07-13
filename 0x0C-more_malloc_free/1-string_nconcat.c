#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to concatenated string (or NULL on failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a1, a2, b, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a1 = 0; s1[a1] != '\0'; a1++)
		;

	for (a2 = 0; s2[a2] != '\0'; a2++)
		;

	if (n > a2)
		n = a2;

	b = a1 + n;

	ptr = malloc(b + 1);

	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < b; c++)
		if (c < a1)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[c - a1];

	ptr[c] = '\0';

	return (ptr);
}

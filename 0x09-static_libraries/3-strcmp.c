#include "main.h"

/**
 * _strcmp - Compares s1 and s2
 *
 * @s1: String to be compared
 * @s2: String to be compared
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while ((s1[x] == s2[x]) && (s1[x] != '\0'))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

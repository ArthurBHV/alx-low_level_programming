#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be tested
 * @accept: bytes accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int a, foundChar;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			foundChar = 0;
			if (*s == accept[a])
			{
				result++;
				foundChar = 1;
				break;
			}
		}
		if (!foundChar)
			break;
		s++;
	}
	return (result);
}

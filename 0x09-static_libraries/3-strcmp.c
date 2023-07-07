#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: If s1 is less than s2, the difference of the first characters
 * if s1 = s2 return 0,
 * if s1 > s2 positive diefference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}	
	return (*s1 - *s2);
}

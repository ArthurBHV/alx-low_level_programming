#include "main.h"

/**
 * leet - encodes a string into "leet" or "1337" language.
 * @str: Input string to be encoded.
 * Return: Encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; s1[j] != '\0'; j++)
	{
	if (str[i] == s1[j])
	{
	str[i] = s2[j];
	break;
	}
	}
	}

	return (str);
}

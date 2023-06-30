#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @a: pointer to string
 * Return: Encoded string
 */
char *rot13(char *a)
{
	int g, b;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (g = 0; a[g] != '\0'; g++)
	{
	for (b = 0; data1[b] != '\0'; b++)
	{
	if (a[g] == data1[b])
	{
	a[g] = data2[b];
	break;
	}
	}
	}
	return (a);
}

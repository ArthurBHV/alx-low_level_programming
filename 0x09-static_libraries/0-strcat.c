#include "main.h"
/**
 *_strcat -  concatenates two strings
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}

	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;  /*sum d*/
		c++; /**sum c*/
	}

	dest[c] = '\0';

	return (dest);
}

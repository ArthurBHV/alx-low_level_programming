#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@dest: A pointer
 *@src: A pointer
 *@n: value
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count character */
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0') /*WHILE concatenate dest with src*/
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

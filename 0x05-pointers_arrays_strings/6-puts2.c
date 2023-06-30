#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string, starting
 * starting with the first character, followed by a new line.
 * @str: The string
 * Return: empty
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}

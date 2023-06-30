#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string
 * Return: Empty
 */
void puts_half(char *str)
{
	int len = 0;
	int begin_index;

	while (str[len] != '\0')
	{
	len++;
	}

	if (len % 2 == 0)
	{
	begin_index = len / 2;
	}
	else
	{
	begin_index = (len + 1) / 2;
	}

	while (str[begin_index] != '\0')
	{
	putchar(str[begin_index]);
	begin_index++;
	}

	putchar('\n');
}

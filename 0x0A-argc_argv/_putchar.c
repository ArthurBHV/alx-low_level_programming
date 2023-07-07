#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character 
 * Return: 1 when successful
 * on erro return -1 and set errno suitabluy
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

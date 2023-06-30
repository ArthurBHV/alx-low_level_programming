#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Function that prints alphabet x10 in lowercase
 *
 * followed by new line
 * Return: void
 */

void print_alphabet_x10(void)
{
char q;
int a = 0;
while (a <= 9)
{
for (q = 'a'; q <= 'z'; q++)
{
_putchar(q);
}
_putchar('\n');
a++;
}
}

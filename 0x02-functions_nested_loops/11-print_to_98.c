#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @d: print from this number
 */
void print_to_98(int d)
{
int n;
if (d <= 98)
{
for (n = d; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
else
{
for (n = d; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
}

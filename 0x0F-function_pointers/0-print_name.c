#include "funtions_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - write a function that prints a name
 * @name: name to be printed
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

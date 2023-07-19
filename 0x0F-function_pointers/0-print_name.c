#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - write a function that prints a name
 * @name: the name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

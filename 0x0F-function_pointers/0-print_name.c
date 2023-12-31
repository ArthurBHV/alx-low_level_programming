#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - A program that prints a name
 * @name: The name to print
 * @f: pointer to the  function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

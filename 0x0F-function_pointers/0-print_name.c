#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Name: %s\n", name);
	if (f != NULL)
	{
	f(name);
	}
}

void B(void (*ptr)(char *, void (*)(char *)))
{

	ptr("John", print_name);
}

int main(void)
{
	void (*p)(char *, void (*)(char *)) = print_name;

	B(p);
	return (0);
}


#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: pointer to the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: empty
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		str = va_arg(list, char *);
		if (!separator)
			printf("%s", str ? str : "(nil)");
		else
			printf("%s%s", str ? str : "(nil)", separator);
	}

	if (n)
	{
		str = va_arg(list, char *);
		printf("%s\n", str ? str : "(nil)");
	}
	else
	{
		printf("\n");
	}

	va_end(list);
}

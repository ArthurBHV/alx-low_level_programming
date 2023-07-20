#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list para;

	va_start(para, n);

	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(para, int));
		else
			printf("%d%s", va_arg(para, int), separator);
	}

	if (n)
		printf("%d\n", va_arg(para, int));
	else
		printf("\n");

	va_end(para);
}

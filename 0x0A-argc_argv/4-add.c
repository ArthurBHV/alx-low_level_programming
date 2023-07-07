#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (not a digit)
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	return (0);
}

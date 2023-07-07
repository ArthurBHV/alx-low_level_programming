#include "main.h"

/**
 * main -  a program that prints all arguments it receives
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

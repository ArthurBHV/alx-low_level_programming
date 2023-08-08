#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argumentg vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int chr_rd, chrwr, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	chr_rd = open(argv[1], O_RDONLY);
	if (chr_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	chrwr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(chr_rd, buf, BUFSIZ)) > 0)
	{
		if (chrwr < 0 || write(chrwr, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(chr_rd);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(chr_rd);
	c = close(chrwr);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", chr_rd);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", chrwr);
		exit(100);
	}
	return (0);
}

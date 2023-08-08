#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: numbers of letters printed.
 * @filename: file name parameter
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, fwr, frd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	frd = read(fd, buf, letters);
	fwr = write(STDOUT_FILENO, buf, frd);

	free(buf);
	close(fd);
	return (fwr);
}

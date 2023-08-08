#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @text_content: text or content to be written
 * @filename: parameter file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdes;
	int chrwr;
	int rwr;

	if (!filename)
		return (-1);

	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdes == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (chrwr = 0; text_content[chrwr]; chrwr++)
		;

	rwr = write(fdes, text_content, chrwr);

	if (rwr == -1)
		return (-1);

	close(fdes);

	return (1);
}

#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Write a function that appends text
 * at the end of a file
 * @text_content: content to append into the file
 * @filename: the file to be appended to
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, i, j = 0;

	if (!filename)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fdes, text_content, j);
		if (i != j)
			return (-1);
	}

	close(fdes);

	return (1);
}

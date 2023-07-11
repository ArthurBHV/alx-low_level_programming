#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - a function that splits a string into words
 * @str: The string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int d, height, a, b, e1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (d = height = 0; str[d] != '\0'; d++)
		if (str[d] != ' ' && (str[d + 1] == ' ' || str[d + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (a = e1 = 0; a < height; a++)
	{
		for (d = e1; str[d] != '\0'; d++)
		{
			if (str[d] == ' ')
				e1++;
			if (str[d] != ' ' && (str[d + 1] == ' ' || str[d + 1] == '\0'))
			{
				aout[a] = malloc((d - e1 + 2) * sizeof(char));
				if (aout[a] == NULL)
				{
					ch_free_grid(aout, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; e1 <= d; e1++, b++)
			aout[a][b] = str[e1];
		aout[a][b] = '\0';
	}
	aout[a] = NULL;
	return (aout);
}

#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: The pointer
 * Return: An integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int no = 0;
	int sign = 1;
	int hasNumber = 0;

	while (s[x])
	{
	if (s[x] == '-')
	{
	sign *= -1;
	}
	while (s[x] >= '0' && s[x] <= '9')
	{
	hasNumber = 1;
	no = (no * 10) + (s[x] - '0');
	x++;
	}
	if (hasNumber == 1)
	{
	break;
	}
	x++;
	}
	no *= sign;
	return (no);
}

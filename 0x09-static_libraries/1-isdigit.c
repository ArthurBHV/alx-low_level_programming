#include "main.h"
/**
 * _isdigit - check for a digit from 0 throug to 9
 * @c: number to check
 * Return: if c is a digit and returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		else
	{
		return (0);
	}
}

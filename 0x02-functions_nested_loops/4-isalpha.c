#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character
 * @g: The character to be checked
 * Return: 1 for alphabetic character otherwise return 0
 */
int _isalpha(int g)
{
	if ((g >= 'A' && g <= 'Z') || (g >= 'a' && g <= 'z'))
	{
		return (1);
	}
	return (0);
}

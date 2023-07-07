#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @g: The character to be checked
 * Return: 1 for lowercase or 0 for otherwise
 */
int _islower(int g)
	{
	if (g > 'a' && g <= 'z')
	{
	return (1);
	}
	return (0);
}

#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @C the character to print
 * Return: 1 (success)
 * On error, 1- is returned and errmo is set suitably
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

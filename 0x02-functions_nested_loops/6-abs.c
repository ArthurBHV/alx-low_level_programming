#include "main.h"
#include <stdio.h>
/**
 * _abs - Write a function that computes the absolute value of an integer
 * @g: The number to be computed
 * Return: Absolute value of the of number or zero
 */
int _abs(int g)
{
if (g < 0)
{
int abs_value;
abs_value = g * -1;
return (abs_value);
}
return (g);
}

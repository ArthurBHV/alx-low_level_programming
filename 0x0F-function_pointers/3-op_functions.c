#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b.
 * @a: first value
 * @b: second value
 *
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first value
 * @b: second value
 *
 * Return: difference a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first value
 * @b: second value
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first value
 * @b: second value
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two integers
 * @a: first value
 * @b: second value
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

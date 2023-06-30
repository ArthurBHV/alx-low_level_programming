#include <stdio.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int i, j, k, carry = 0;

	while (n1[len1] != '\0')
	len1++;
	while (n2[len2] != '\0')
	len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);

	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	while (i >= 0 || j >= 0)
	{
	int sum = carry;

	if (i >= 0)
	sum += n1[i] - '0';
	if (j >= 0)
	sum += n2[j] - '0';

	carry = sum / 10;
	r[k] = (sum % 10) + '0';

	i--;
	j--;
	k--;
	}

	if (carry != 0)
	return (0);

	return (&r[k + 1]);
}

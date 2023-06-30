#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program to assign random number to variable
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
int n, o;
srand(time(0));
n = rand() - RAND_MAX / 2;
o = n % 10;
printf("Last digit of %d is ", n);
if (o > 5)
printf("%d and is greater than 5\n", o);
else if (o == 0)
printf("%d and is 0\n", o);
else
printf("%d and is less than 6 and not 0\n", o);
return (0);
}

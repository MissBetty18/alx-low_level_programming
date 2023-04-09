#include "main.h"
/**
 * factorial - gives factorial of a number
 *
 * @n: number to be factored
 *
 * Return: -1 if n = 0 , 1 if n = 1 , and n * factorial(n - 1)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

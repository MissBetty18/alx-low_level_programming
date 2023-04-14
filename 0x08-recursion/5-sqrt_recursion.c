#include "main.h"
int evaluate_sqrt(int n, int i);
/**
 * _sqrt_recursion - recurses natural square root of a number
 *
 * @n: number to check for its square root
 *
 * Return: square root value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (evaluate_sqrt(n, 0));
}

/**
 * evaluate_sqrt - returns the square root of a number
 *
 * @n: number to check for its square root
 * @i: iterate
 *
 * Return: square root value
 */
int evaluate_sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (evaluate_sqrt(n, i + 1));
}

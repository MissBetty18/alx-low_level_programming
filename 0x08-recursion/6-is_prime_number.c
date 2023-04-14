#include "main.h"
int evaluate_prime(int n, int i);

/**
 * is_prime_number - finds prime numbers
 *
 * @n: number to check for prime numbers
 *
 *
 * Return: 1 if there are prime numbers
 * and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (evaluate_prime(n, n - 1));
}

/**
 * evaluate_prime - finds prime numbers
 *
 * @n: number to calculate its prime numbers
 * @i: iterator
 *
 * Return: 1 if a prime number and 0 if not
 */
int evaluate_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0 )
		return (0);
	return (evaluate_prime(n, i - 1));
}

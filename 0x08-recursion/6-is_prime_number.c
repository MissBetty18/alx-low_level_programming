#include "main.h"
/*
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
}

/**
 * check_prime - finds prime numbers
 *
 * @n: number to calculate its prime numbers
 * @i: iterator
 *
 * Return: 1 if a prime number and 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

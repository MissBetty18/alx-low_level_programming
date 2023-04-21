#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 *
 * @n: number to be returned
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	
	va_list add;

	if (n == 0)
		return (0);
	va_start(add, n);

	/* All actions will take place here*/
	for (index = 0 ; index < n; index++)
	{
		sum += va_arg(add, int);
	}
	va_end(add);
	return (sum);
}

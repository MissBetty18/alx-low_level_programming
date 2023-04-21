#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers to pass function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;

	if (separator == NULL)
		printf("%s", separator);
	va_start(numbers, n);

	unsigned int index;

	for (index = 0; index < n ; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}

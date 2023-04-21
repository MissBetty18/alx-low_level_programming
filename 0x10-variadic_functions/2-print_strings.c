#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 *
 * @separator: string to be printed between the strings
 * @n: number of strings to be passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	va_start(string, n);
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		const char *str = va_arg(string, const char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator == NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}

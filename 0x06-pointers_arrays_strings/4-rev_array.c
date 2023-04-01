#include "main.h"
/**
 * reverse_array - function that reverses the content of a
 *
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0 ; i < n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}

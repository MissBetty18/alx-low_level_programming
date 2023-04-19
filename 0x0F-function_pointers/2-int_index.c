#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns index of an element
 *
 * @array: collection of elements of same type
 * @size: number of elements in array
 * @cmp: pointer tto function to be used to compare values
 *
 * Return: -1 if no element matches and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0 ; i <= size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

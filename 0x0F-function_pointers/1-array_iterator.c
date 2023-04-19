#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a fn given as a parameter
 * on each element of an array
 *
 * @size: size of an array
 * @array: collection of elements of same type
 * @action: pointer to function needed to be used
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}

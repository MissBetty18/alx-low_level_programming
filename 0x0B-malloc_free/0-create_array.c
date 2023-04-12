#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * @size: arrays size
 * @c: char to be initialized
 *
 * Return: NULL if size is 0 & array is null
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (size == 0 || array == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		array[i] = c;
	return (array);
}

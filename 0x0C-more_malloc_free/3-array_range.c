#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of strings
 *
 * @min: start of array values
 * @max: end of array values
 *
 * Return: result of array values
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

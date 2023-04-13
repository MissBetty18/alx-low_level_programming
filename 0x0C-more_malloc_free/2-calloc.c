#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory of an array
 *
 * @nmemb: parameter of elements
 * @size: size in bytes
 *
 * Return: NULL if nmemb and size are 0
 * and result if memory is allocated
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int k = (nmemb * size);
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(k);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < k  ; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

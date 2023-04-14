#include "main.h"
/**
 * _memcpy - function that copies memory area from src to dest
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  j = 0;

	for (j = 0 ; j < n ; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

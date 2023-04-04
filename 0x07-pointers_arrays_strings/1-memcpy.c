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
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n && *(src + 1) != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

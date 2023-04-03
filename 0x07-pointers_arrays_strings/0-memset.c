#include "main.h"
/**
 * _memset -  function that fills the memory with a certain value
 *
 * @s: memory area to be filled
 * @b: constant byte to fill memory
 * @n: number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}

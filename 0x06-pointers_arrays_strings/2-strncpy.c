#include "main.h"
/**
 * _strncpy - function that copies string src to dest
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of characters
 *
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

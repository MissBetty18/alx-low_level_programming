#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n characters from src to dest
 *
 * @dest: string to concatenate from
 * @src: string to concatenate to
 * @n: parameter
 *
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int destlen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

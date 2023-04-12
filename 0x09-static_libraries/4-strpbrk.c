#include "main.h"
/**
 * _strpbrk - searches for a string in a set of bytes
 *
 *  @s: string to be searched
 *  @accept: string to be compared with s
 *
 *  Return: null if no occurence, s if occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] ; s++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}
	return ('\0');
}

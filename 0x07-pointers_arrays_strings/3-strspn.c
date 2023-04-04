#include "main.h"
/**
 * _strspn - function that gets length of substring
 *
 * @s: string to get length
 * @accept: string to campare length with
 *
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j] && accept[j + 1] == '\0')
				break;
		}
		return (i);
	}
	return (i);
}

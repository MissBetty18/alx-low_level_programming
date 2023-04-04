#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 * @haystack: string parameter
 * @needle: substring to be located
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int k, l;

	for (k = 0 ; haystack[k] ; k++)
	{
		for (l = 0 ; needle[l] ; l++)
		{
			if (needle[l] == haystack[k])
				return (needle);
		}
	}
	return (needle);
}

#include "main.h"
/**
 * _strchr - locates character c in string s
 *
 * @s: string parameter
 * @c: character parameter
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i; 

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}

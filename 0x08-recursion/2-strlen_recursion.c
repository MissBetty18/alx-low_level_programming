#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string parameter
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int longi = 0;

	while (*s == '\0')
	{
		return (0);
		longi++;
	}
	return (_strlen_recursion(s) + 1);
}

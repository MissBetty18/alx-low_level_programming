#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2
 *
 * Return: resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *str;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n > len2)
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		str = malloc(sizeof(char) * (len1 + n + 1));

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];
	while (n <= len2 && i < (len1 + n))
		str[i++] = s2[j++];
	while (i < len1 && i++)
	{
		str[i] = s1[i];
	}
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str[i] = '\0';
	return (str);
}

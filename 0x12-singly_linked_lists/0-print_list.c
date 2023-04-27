#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elemts of list_t
 *
 * @h: pointer to list_t
 *
 * Return: list of elements
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			c++;
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	return (c);
}

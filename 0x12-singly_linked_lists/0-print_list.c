#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints the elements of a list_t list
 * @h: pointer to list_t
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (z);
}

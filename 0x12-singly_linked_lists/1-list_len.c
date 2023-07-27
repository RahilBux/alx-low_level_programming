#include "lists.h"

/**
 * list_len - returns length of linked list
 * @h: pointer to the struct
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while(h)
	{
		s++;
		h = h->next;
	}
	return (s);
}

#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}

	return (s);
}

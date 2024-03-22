#include "lists.h"

/**
 * dlistint_len - calculated number of elements in a doubly linked list
 * @h: pointer to the head
 *
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}

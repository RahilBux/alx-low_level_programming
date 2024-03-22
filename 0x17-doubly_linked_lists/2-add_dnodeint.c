#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list
 * @head: pointer to the head
 * @n: integer to add
 *
 * Return: pointer to the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;

	if (h != NULL)
		h->prev = new;
	*head = new;

	return (new);
}

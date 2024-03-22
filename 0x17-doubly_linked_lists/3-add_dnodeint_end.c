#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of list
 * @head: double pointer to the head
 * @n: integer
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	h = *head;

	if (h == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (h->next != NULL)
		h = h->next;

	h->next = new;
	new->prev = h;
	return (new);
}

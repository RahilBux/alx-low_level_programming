#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at given index
 * @h: double pointer to the head
 * @idx: index starting at 0
 * @n: integer to insert
 *
 * Return: pointer to the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p1 = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (idx == 0 && p1 != NULL)
	{
		new->n = n;
		new->next = p1;
		new->prev = NULL;
		p1->prev = new;
		*h = new;
		return (new);
	}
	if (idx == 0 && p1 == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	new->n = n;

	while (p1 != NULL && idx > 0)
	{
		p1 = p1->next;
		idx--;
	}

	if (p1 == NULL)
		return (NULL);

	p1 = p1->prev;
	new->next = p1->next;
	new->prev = p1;
	p1->next->prev = new;
	p1->next = new;

	return (new);
}

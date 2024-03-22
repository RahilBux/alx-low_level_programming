#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: double pointer to head
 * @idx: index starting at 0
 * @n: integer
 *
 * Return: The address of the new node or NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL
	dlistint_t *p1;
	unsigned int i;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		p1 = *h;
		i = 1;
		if (p1 != NULL)
			while (p1->prev != NULL)
				p1 = p1->prev;
		while (p1 != NULL)
		{
			if (i == idx)
			{
				if (p1->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = p1->next;
						new->prev = p1;
						p1->next->prev = new;
						p1->next = new;
					}
				}
				break;
			}
			p1 = p1->next;
			i++;
		}
	}
	return (new);
}

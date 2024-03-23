#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * @head: double pointer to head
 * @index: index starting at 0
 *
 * Return: 1 if success -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *p2;
	unsigned int i;

	p1 = *head;

	if (p1 != NULL)
		while (p1->prev != NULL)
			p1 = p1->prev;

	i = 0;

	while (p1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = p1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				p2->next = p1->next;

				if (p1->next != NULL)
					p1->next->prev = p2;
			}

			free(p1);
			return (1);
		}
		p2 = p1;
		p1 = p1->next;
		i++;
	}
	return (-1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	while (h != NULL)
	{
		head = head->next;
		free(h);
		h = head;
	}
}

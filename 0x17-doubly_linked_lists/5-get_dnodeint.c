#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at nth position
 * @head: pointer to the head
 * @index: index starting at 0
 *
 * Return: pointer to the node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;

	while (h != NULL && index > 0)
	{
		h = h->next;
		index--;
	}
	if (h == NULL)
		return (NULL);
	return (h);
}

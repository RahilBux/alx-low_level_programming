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

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

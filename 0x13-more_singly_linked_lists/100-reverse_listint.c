#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: a pointer to a pointer to head
 *
 * Return: pointer to the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		(*head) = next;
	}
	(*head) = previous;

	return (*head);
}


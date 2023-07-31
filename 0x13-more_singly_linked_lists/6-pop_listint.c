#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the head nodes data(n)
 * @head: pointer to a pointer to head
 *
 * Return: head nodes data or 0
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	(*head) = (*head)->next;
	i = temp->n;
	free(temp);
	return (i);
}

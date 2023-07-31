#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to a pointer to the head
 * @n: value of n in the node
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}

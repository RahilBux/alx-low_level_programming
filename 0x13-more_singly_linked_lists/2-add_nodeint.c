#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: a pointer to a pointer
 * @n: value of n in the struct list
 *
 * Return: Address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}

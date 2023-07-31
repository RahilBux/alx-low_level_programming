#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head of the list
 * @index: index of the node starting at 0
 *
 * Return: nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	return (temp);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to a pointer to head
 * @index: index of the node to delete starting at 0
 *
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2, *delete;
	unsigned int i;

	if (head == NULL)
		return (-1);

	temp = *head;
	temp2 = *head;
	delete = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	for (i = 0; i < index + 1 && temp != NULL; i++)
	{
		temp2 = temp2->next;
	}
	temp->next = temp2;

	for (i = 0; i < index && temp != NULL; i++)
	{
		delete = delete->next;
	}
	free(delete);
	return (1);
}

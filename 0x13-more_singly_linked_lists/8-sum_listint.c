#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) in linked list
 * @head: head of the list
 *
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a list
 * @head: pointer to the head
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h;

	if (head == NULL)
		return (0);

	h = head;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to head
 * 
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}

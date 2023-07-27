#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of list
 * @head: double pointer to the list
 * @str: string to put in the new node
 *
 * Return: added to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}

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

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while(temp->next)
		temp = temp->next;

	temp->next = n;

	return (n);
}

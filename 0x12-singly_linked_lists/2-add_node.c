#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: double pointer to the list
 * @str: new string to add to the node
 *
 * Return: address to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str)
		len++;

	n = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

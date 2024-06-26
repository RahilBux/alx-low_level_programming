#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	if (size == 0)
		return (NULL);

	tab = calloc(1, sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	tab->size = size;
	tab->array = calloc(size, sizeof(hash_node_t *));
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

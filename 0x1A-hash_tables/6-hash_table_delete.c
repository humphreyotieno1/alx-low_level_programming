#include "hash_tables.h"

/**
 * hash_table_delete -function to free and delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next;
	unsigned long int index = 0;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
	return;
	}
	while (index < ht->size)
	{
		node = (ht->array[index]);
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}

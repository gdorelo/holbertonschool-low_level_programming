#include "hash_tables.h"
/**
 * hash_table_delete - function to delete a hash table
 * @ht: hash table to be deleted
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}

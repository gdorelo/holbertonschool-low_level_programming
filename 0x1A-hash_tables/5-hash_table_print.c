#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table given to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int counter = 0;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (counter > 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			counter++;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}

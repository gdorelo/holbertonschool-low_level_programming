#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table you want to update
 * @key: key
 * @value: value associated with the key
 * Return: 1 for success, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && !(match(key, ht->array[index], value)))
		return (1);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!(new_node->key) || !(new_node->value))
	{
		if (new_node->key)
			free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 *match - Check if a key value is already in a bucket
 * @key: key
 * @bucket_array: bucket
 * @value: node's value to update
 * Return: 1 if there's not a match and 0 if there is
 */
int match(const char *key, hash_node_t *bucket_array, const char *value)
{
	hash_node_t *elemento = bucket_array;

	while (elemento)
	{
		if (!(strcmp(elemento->key, key)))
		{
			free(elemento->value);
			elemento->value = strdup(value);
			return (0);
		}
		elemento = elemento->next;
	}
	return (1);
}

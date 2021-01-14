#include "hash_tables.h"
/**
 * key_index - function that returns the index of a key
 * @key: key of the hash table
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair is
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

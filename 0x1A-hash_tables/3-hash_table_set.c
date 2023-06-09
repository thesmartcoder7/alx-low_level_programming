#include "hash_tables.h"

/**
 * hash_table_set - Add or update a hash table element.
 * @ht: A pointer to the hash table.
 * @key: The key to be added.
 * @value: The value to the key.
 *
 * Return: 0 on fail else 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elem;
	char *val_cpy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (val_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_cpy;
			return (1);
		}
	}
	elem = malloc(sizeof(hash_node_t));
	if (elem == NULL)
	{
		free(val_cpy);
		return (0);
	}
	elem->key = strdup(key);
	if (elem->key == NULL)
	{
		free(elem);
		return (0);
	}
	elem->value = val_cpy;
	elem->next = ht->array[index];
	ht->array[index] = elem;

	return (1);
}

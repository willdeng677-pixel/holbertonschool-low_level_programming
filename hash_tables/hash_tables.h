#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - node of a hash table
 *
 * @key: key of the node
 * @value: value associated with the key
 * @next: next node in the linked list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table
 *
 * @size: size of the array
 * @array: array of the hash table
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

#endif /* HASH_TABLES_H */

#include "hashtables.h"
/**
*
*
*
*/

char *hash_table_get(const hash_table_t *ht, const char *key) {
unsigned long int index;
hash_node_t *node;
if (!ht || !key || strlen(key) == 0) {
return NULL;
}
index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];
while (node) {
if (strcmp(node->key, key) == 0) {
return node->value;
}
node = node->next;
}
return NULL;
}
/**
 * key_index - Retrieves the index of a key
 * @key: The key to be indexed
 * @size: The size of the hash table array
 *
 * Return: The computed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value, index;

    hash_value = hash_djb2(key);
    index = hash_value % size;
    return (index);
}

#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

shash_table_t *shash_table_create(unsigned long int size) {
shash_table_t *ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return NULL;
ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (ht->array == NULL) {
free(ht);
return NULL;
}
ht->shead = NULL;
ht->stail = NULL;
return ht;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value) 
{
unsigned long int index;
shash_node_t *new_node = NULL;
	if (ht == NULL || key == NULL || value == NULL)
return 0;

index = key_index((const unsigned char *)key, ht->size);
new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return 0;

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;

if (ht->shead == NULL) 
{
ht->shead = new_node;
ht->stail = new_node;
new_node->sprev = NULL;
new_node->snext = NULL;
} 
else 
{
shash_node_t *temp = ht->shead;
while (temp != NULL && strcmp(key, temp->key) > 0)
temp = temp->snext;
if (temp == NULL) 
{
ht->stail->snext = new_node;
new_node->sprev = ht->stail;
new_node->snext = NULL;
ht->stail = new_node;
} 
else if (temp == ht->shead) 
{
new_node->snext = ht->shead;
new_node->sprev = NULL;
ht->shead->sprev = new_node;
ht->shead = new_node;
} 
else 
{
new_node->snext = temp;
new_node->sprev = temp->sprev;
temp->sprev->snext = new_node;
temp->sprev = new_node;
}
}
return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key) 
{
unsigned long int index;
shash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
return NULL;

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL && strcmp(key, temp->key) != 0)
temp = temp->next;
return temp == NULL ? NULL : temp->value;
}

void shash_table_print(const shash_table_t *ht) {
shash_node_t *temp = NULL;
	
	if (ht == NULL)
return;

temp = ht->shead;
printf("{");
while (temp != NULL) {
printf("'%s': '%s'", temp->key, temp->value);
if (temp->snext != NULL)
printf(", ");
temp = temp->snext;
}
printf("}\n");
}

void sh_table_print_rev(const shash_table_t *ht) {
shash_node_t *temp = NULL;
	
	if (ht == NULL)
return;

temp = ht->stail;
printf("{");
while (temp != NULL) {
printf("'%s': '%s'", temp->key, temp->value);
if (temp->sprev != NULL)
printf(", ");
temp = temp->sprev;
}
printf("}\n");
}

void shash_table_delete(shash_table_t *ht) {
shash_node_t *temp, *current;
	unsigned long int i;

	if (ht == NULL)
return;


for (i = 0; i < ht->size; i++) {
temp = ht->array[i];
while (temp != NULL) {
current = temp;
temp = temp->next;
free(current->key);
free(current->value);
free(current);
}
}
free(ht->array);
free(ht);
}

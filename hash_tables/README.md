Hash tables and How are they working?

There is given two structures:
The first one is hash table itself
```
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t
```
where `size` is the size of `array` of linked lists;

The second structure is the node of linked list:
```
typedef struct hash_node_s
{
	unsigned char *key;
	unsigned char *value;
	hash_node_t *next;
} hash_node_t
```
where `key` is key, which will be hash'ed to get the index in array. `value` is the data of node. `next` is the link to the next node.

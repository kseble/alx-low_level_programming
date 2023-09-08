HashTable* create_table(int size)
hash_table_t *hash_table_create(unsigned long int size);
{
    // Creates a new HashTable.
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}

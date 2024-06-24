#include "basic_data_structures.h"

void ht_traversal(struct Node ***head_ref, int key)
{
    int hash = key % 10;
    ll_traversal(*(head_ref + hash));
}

void ht_insert(struct Node ***head_ref, int key)
{
    int hash = key % 10;
    ll_insert_head(*(head_ref + hash), key);
}

void ht_delete(struct Node ***head_ref, int key)
{
    int hash = key % 10;
    ll_delete_head(*(head_ref + hash));
}
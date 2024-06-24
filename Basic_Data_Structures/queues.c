#include "basic_data_structures.h"

void queue_enqueue(struct Node **head_ref, int num)  // O(n)
{ 
    ll_insert_tail(head_ref, num);
}

void queue_dequeue(struct Node **head_ref)  // O(1)
{
    ll_delete_head(head_ref);
}
void queue_peek(struct Node **head_ref)  // O(1)
{
    if (*head_ref) {
        printf("%d\n", (*head_ref)->data);
    }
}
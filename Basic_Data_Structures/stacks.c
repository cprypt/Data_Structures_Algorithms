#include "basic_data_structures.h"

void stack_push(struct Node **head_ref, int num)  // O(1)
{
    ll_insert_head(head_ref, num);
}

void stack_pop(struct Node **head_ref)  // O(1)
{
    ll_delete_head(head_ref);
}

void stack_peek(struct Node **head_ref)  // O(1)
{
    if (*head_ref) {
        printf("%d\n", (*head_ref)->data);
    }
}
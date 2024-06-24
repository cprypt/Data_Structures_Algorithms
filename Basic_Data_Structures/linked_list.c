#include "basic_data_structures.h"

void ll_traversal(struct Node **head_ref)  // O(n)
{
    struct Node *cur = *head_ref;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

void ll_delete_head(struct Node **head_ref)  // O(1)
{
    struct Node *cur = *head_ref;
    if (!cur)
    {
        return;
    }
    *head_ref = cur->next;
    free(cur);
}

void ll_delete_tail(struct Node **head_ref)  // O(n)
{
    struct Node *cur = *head_ref;
    if (!cur)
    {
        return;
    }
    
    if (!cur->next)
    {
        *head_ref = NULL;
        free(cur);
    }
    else
    {
        while (cur->next->next)
        {
            cur = cur->next;
        }
        free(cur->next);
        cur->next = NULL;
    }
}

void ll_insert_head(struct Node **head_ref, int num)  // O(1)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = num;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void ll_insert_tail(struct Node **head_ref, int num)  // O(n)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = num;
    new_node->next = NULL;

    struct Node *cur = *head_ref;
    if (!cur)
    {
        *head_ref = new_node;
        return;
    }

    while (cur->next)
    {
        cur = cur->next;
    }
    cur->next = new_node;
}
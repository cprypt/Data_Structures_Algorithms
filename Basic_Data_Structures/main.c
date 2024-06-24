#include "basic_data_structures.h"

int main()
{
    int size = 0;
    int *arr = (int *)malloc(sizeof(int) * 10);
    int *org = arr;
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = 0;
    }

    arr_insert_head(arr, &size, 1);
    arr_insert_head(arr, &size, 2);
    arr_insert_tail(arr, &size, 3);
    arr_insert_tail(arr, &size, 4);

    arr_delete_head(&arr, &size);
    arr_delete_tail(arr, &size);

    arr_traversal(arr, size);

    struct Node **ll = (struct Node **)malloc(sizeof(struct Node *));
    *ll = NULL;
    ll_insert_head(ll, 5);
    ll_insert_head(ll, 3);
    ll_insert_tail(ll, 1);
    ll_insert_tail(ll, 2);
    ll_insert_tail(ll, 4);

    ll_delete_head(ll);
    ll_delete_tail(ll);

    ll_traversal(ll);

    struct Node **stack = (struct Node **)malloc(sizeof(struct Node *));
    *stack = NULL;
    for (int i = 0; i < 5; i++)
    {
        stack_push(stack, i);
    }

    for (int i = 0; i < 5; i++)
    {
        stack_peek(stack);
        stack_pop(stack);
    }

    struct Node **queue = (struct Node **)malloc(sizeof(struct Node *));
    *queue = NULL;
    for (int i = 0; i < 5; i++)
    {
        queue_enqueue(queue, i);
    }

    for (int i = 0; i < 5; i++)
    {
        queue_peek(queue);
        queue_dequeue(queue);
    }

    struct Node ***ht = (struct Node ***)malloc(sizeof(struct Node **) * 10);
    for (int i = 0; i < 10; i++)
    {
        *(ht + i) = (struct Node **)malloc(sizeof(struct Node *));
        **(ht + i) = NULL;
    }

    ht_insert(ht, 22);
    ht_insert(ht, 32);
    ht_insert(ht, 23);
    ht_insert(ht, 33);
    ht_insert(ht, 24);
    ht_insert(ht, 34);
    ht_insert(ht, 44);
    ht_insert(ht, 54);

    ht_delete(ht, 24);

    ht_traversal(ht, 24);

    free(org);

    while (*ll)
    {
        ll_delete_head(ll);
    }
    free(ll);

    while (*stack)
    {
        stack_pop(stack);
    }
    free(stack);

    while (*queue)
    {
        queue_dequeue(queue);
    }
    free(queue);
    
    for (int i = 0; i < 10; i++)
    {
        while (**(ht + i))
        {
            ll_delete_head(*(ht + i));
        }
        free(*(ht + i));
    }
    free(ht);
    return 0;
}
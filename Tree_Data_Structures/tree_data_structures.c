#include "tree_data_structures.h"

void in_order_traversal(struct Node *cur)
{
    if (cur)
    {
        in_order_traversal(cur->left);
        printf("%d ", cur->data);
        in_order_traversal(cur->right);
    }
}

void pre_order_traversal(struct Node *cur)
{
    if (cur)
    {
        printf("%d ", cur->data);
        pre_order_traversal(cur->left);
        pre_order_traversal(cur->right);
    }
}

void post_order_traversal(struct Node *cur)
{
    if (cur)
    {
        post_order_traversal(cur->left);
        post_order_traversal(cur->right);
        printf("%d ", cur->data);
    }
}

struct Node *breadth_first_search(struct Node *cur, int num)
{
    int front = 0, back = 0;
    struct Node *queue[100];

    while (cur)
    {
        if (cur->data == num)
        {
            return cur;
        }

        if (cur->left)
        {
            queue[back++] = cur->left;
        }

        if (cur->right)
        {
            queue[back++] = cur->right;
        }

        if (front == back)
        {
            break;
        }

        cur = queue[front++];
    }

    return NULL;
}

struct Node *depth_first_search(struct Node *cur, int num)
{
    int top = 0;
    struct Node *stack[100];

    while (cur)
    {
        if (cur->data == num)
        {
            return cur;
        }

        if (cur->left)
        {
            stack[top++] = cur->left;
        }

        if (cur->right)
        {
            stack[top++] = cur->right;
        }

        if (top == 0)
        {
            break;
        }

        cur = stack[--top];
    }
    
    return NULL;
}
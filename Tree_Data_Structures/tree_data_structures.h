#include <stdio.h>
#include <stdlib.h>

#ifndef TREE_DATA_STRUCTURES_H
#define TREE_DATA_STRUCTURES_H

struct Node  // Single Linked List로 구현
{
    int data;
    struct Node *parent;
    struct Node *left;
    struct Node *right;
};

/*
void bt();
void bst();
void avl();
void b();
*/

void in_order_traversal(struct Node *cur);
void pre_order_traversal(struct Node *cur);
void post_order_traversal(struct Node *cur);

struct Node *breadth_first_search(struct Node *cur, int num);
struct Node *depth_first_search(struct Node *cur, int num);

#endif
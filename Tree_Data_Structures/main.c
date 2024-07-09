#include "tree_data_structures.h"

int main()
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 0;
    root->parent = NULL;
    root->left = (struct Node *)malloc(sizeof(struct Node));
    root->right = (struct Node *)malloc(sizeof(struct Node));

    root->left->data = 1;
    root->left->parent = root;
    root->left->left = (struct Node *)malloc(sizeof(struct Node));
    root->left->right = (struct Node *)malloc(sizeof(struct Node));

    root->right->data = 2;
    root->right->parent = root;
    root->right->left = (struct Node *)malloc(sizeof(struct Node));
    root->right->right = (struct Node *)malloc(sizeof(struct Node));
    
    root->left->left->data = 3;
    root->left->left->parent = root->left;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right->data = 4;
    root->left->right->parent = root->left;
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    root->right->left->data = 5;
    root->right->left->parent = root->right;
    root->right->left->left = NULL;
    root->right->left->right = NULL;

    root->right->right->data = 6;
    root->right->right->parent = root->right;
    root->right->right->left = NULL;
    root->right->right->right = NULL;

    in_order_traversal(root);
    printf("\n");

    pre_order_traversal(root);
    printf("\n");
    
    post_order_traversal(root);
    printf("\n");

    struct Node *search1 = breadth_first_search(root, 4);
    printf("%d\n", search1->data);

    struct Node *search2 = depth_first_search(root, 5);
    printf("%d\n", search2->data);

    return 0;
}
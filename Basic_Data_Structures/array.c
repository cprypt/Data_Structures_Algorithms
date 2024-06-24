#include "basic_data_structures.h"

void arr_traversal(int *arr, int size)  // O(n)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void arr_delete_head(int **arr, int *size)  // O(1)
{
    if (*size == 0)
    {
        return;
    }
    **arr = 0;
    *arr = *arr + 1;
    *size = *size - 1;
}

void arr_delete_tail(int *arr, int *size)  // O(1)
{
    if (*size == 0)
    {
        return;
    }
    *(arr + *size - 1) = 0;
    *size = *size - 1;
}

void arr_insert_head(int *arr, int *size, int num)  // O(n)
{
    for (int i = *size; i > 0; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }
    *arr = num;
    *size = *size + 1;
}

void arr_insert_tail(int *arr, int *size, int num)  // O(1)
{
    *(arr + *size) = num;
    *size = *size + 1;
}
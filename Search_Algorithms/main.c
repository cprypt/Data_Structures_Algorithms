#include "search_algorithms.h"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d\n", linear_search(arr, 5, 3));
    printf("%d\n", binary_search(arr, 0, 4, 3));
    return 0;
}
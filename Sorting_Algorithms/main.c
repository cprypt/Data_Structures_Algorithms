#include "sorting_algorithms.h"

int main()
{
    int arr1[5] = {5, 4, 3, 2, 1};
    bubble_sort(arr1, 5);
    printf("%d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

    int arr2[5] = {5, 4, 3, 2, 1};
    insertion_sort(arr2, 5);
    printf("%d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);

    int arr3[5] = {5, 4, 3, 2, 1};
    selection_sort(arr3, 5);
    printf("%d %d %d %d %d\n", arr3[0], arr3[1], arr3[2], arr3[3], arr3[4]);

    int arr4[5] = {5, 4, 3, 2, 1};
    merge_sort(arr4, 0, 4);
    printf("%d %d %d %d %d\n", arr4[0], arr4[1], arr4[2], arr4[3], arr4[4]);

    int arr5[5] = {5, 4, 3, 2, 1};
    quick_sort(arr5, 0, 4);
    printf("%d %d %d %d %d\n", arr5[0], arr5[1], arr5[2], arr5[3], arr5[4]);

    int arr6[5] = {5, 4, 3, 2, 1};
    heap_sort(arr6, 5);
    printf("%d %d %d %d %d\n", arr6[0], arr6[1], arr6[2], arr6[3], arr6[4]);

    return 0;
}
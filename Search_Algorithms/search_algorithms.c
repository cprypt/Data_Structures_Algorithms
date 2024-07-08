#include "search_algorithms.h"

int linear_search(int arr[], int size, int num)  // O(n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int low, int high, int num)  // O(log n)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)  // 같을 경우
        {
            return mid;
        }
        else if (arr[mid] > num)  // 작을 경우 (왼쪽으로)
        {
            high = mid - 1;
        }
        else if (arr[mid] < num)  // 클 경우 (오른쪽으로)
        {
            low = mid + 1;
        }
    }
    return -1;
}
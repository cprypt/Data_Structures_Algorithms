#include "sorting_algorithms.h"

void bubble_sort(int arr[], int size) // 버블 정렬, O(n^2)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int size) // 삽입 정렬, O(n^2)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

void selection_sort(int arr[], int size) // 선택 정렬, O(n^2)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        int idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                idx = j;
            }
        }
        arr[idx] = arr[i];
        arr[i] = min;
    }
}

void merge(int arr[], int low, int mid, int high) // 합병 정렬, 정복 과정
{
    int temp1[mid - low + 1], temp2[high - mid];

    for (int i = 0; i < mid - low + 1; i++)
    {
        temp1[i] = arr[low + i];
    }

    for (int i = 0; i < high - mid; i++)
    {
        temp2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;

    while (i < mid - low + 1 && j < high - mid)
    {
        if (temp1[i] <= temp2[j])
        {
            arr[k] = temp1[i];
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }

    while (i < mid - low + 1)
    {
        arr[k] = temp1[i];
        i++;
        k++;
    }

    while (j < high - mid)
    {
        arr[k] = temp2[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int low, int high) // 합병 정렬, 분할 과정
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int quick(int arr[], int low, int high) // 퀵 정렬, 정복 과정
{
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quick_sort(int arr[], int low, int high) // 퀵 정렬, 분할 과정
{
    if (low < high)
    {
        int idx = quick(arr, low, high);

        quick_sort(arr, low, idx - 1);
        quick_sort(arr, idx + 1, high);
    }
}

void heap(int arr[], int size, int idx)
{
    int parent = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < size && arr[left] > arr[parent])
    {
        parent = left;
    }

    if (right < size && arr[right] > arr[parent])
    {
        parent = right;
    }

    if (parent != idx)
    {
        int temp = arr[idx];
        arr[idx] = arr[parent];
        arr[parent] = temp;

        heap(arr, size, parent);
    }
}

void heap_sort(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heap(arr, size, i);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heap(arr, i, 0);
    }
}
#include <stdio.h>

#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

void bubble_sort(int arr[], int size);
void insertion_sort(int arr[], int size);
void selection_sort(int arr[], int size);
void merge(int arr[], int low, int mid, int high);
void merge_sort(int arr[], int low, int high);
int quick(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);
void heap(int arr[], int size, int idx);
void heap_sort(int arr[], int size);

#endif
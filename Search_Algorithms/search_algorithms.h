#include <stdio.h>

#ifndef SEARCH_ALGORITHMS_H
#define SEARCH_ALGORITHMS_H

int linear_search(int arr[], int size, int num);  // 순차 탐색
int binary_search(int arr[], int low, int high, int num);  // 이진 탐색

#endif
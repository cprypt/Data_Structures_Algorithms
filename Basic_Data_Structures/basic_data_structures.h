#include <stdio.h>
#include <stdlib.h>

#ifndef BASIC_DATA_STRUCTURES_H
#define BASIC_DATA_STRUCTURES_H

struct Node  // Single Linked List로 구현
{
    int data;
    struct Node *next;
};

void arr_traversal(int *arr, int size);  // Array 순회
void arr_delete_head(int **arr, int *size);  // Array head 삭제
void arr_delete_tail(int *arr, int *size);  // Array tail 삭제
void arr_insert_head(int *arr, int *size, int num);  // Array 데이터 head 앞에 추가
void arr_insert_tail(int *arr, int *size, int num);  // Array 데이터 tail 뒤에 추가

void ll_traversal(struct Node **head_ref);  // LL 순회
void ll_delete_head(struct Node **head_ref);  // LL head 삭제
void ll_delete_tail(struct Node **head_ref);  // LL tail 삭제
void ll_insert_head(struct Node **head_ref, int num);  // LL 데이터 head 앞에 추가
void ll_insert_tail(struct Node **head_ref, int num);  // LL 데이터 tail 뒤에 추가

void stack_push(struct Node **head_ref, int num);  // LL insert head 호출
void stack_pop(struct Node **head_ref);  // LL delete head 호출
void stack_peek(struct Node **head_ref);  // LL head의 data 출력

void queue_enqueue(struct Node **head_ref, int num);  // LL insert tail 호출
void queue_dequeue(struct Node **head_ref);  // LL delete head 호출
void queue_peek(struct Node **head_ref);  // LL head의 data 출력

void ht_traversal(struct Node ***head_ref, int key);  // 인덱스의 해시 값의 리스트 순회
void ht_insert(struct Node ***head_ref, int key);  // 인덱스의 해시 값의 리스트에 추가
void ht_delete(struct Node ***head_ref, int key);  // 인덱스의 해시 값의 리스트의 최근 값 삭제

#endif
#include<stdio.h>
#include<stdlib.h>

#ifndef LL_H
#define LL_H

typedef struct Node Node;

typedef struct LL {
  Node* head;
  Node* tail;
  size_t size;
} LL;

LL* new_LL();

void delete_LL(LL** ll);

void LL_append(LL* ll, int data);


#endif

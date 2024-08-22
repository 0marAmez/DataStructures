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

LL* new_list();

void delete_list(LL** ll);

void append(LL* ll, int data);

void print_list(LL*ll);

int len(LL*ll);

#endif

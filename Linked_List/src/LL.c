#include "LL.h"

struct Node{
  int data;
  struct node* next;
  struct node* prev;
};

static Node* create_node(int data){
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  node->prev = NULL;
  return node;
}

static void* delete_node(Node* n){
  if(n!=NULL &&  *n!=NULL){
    free(n);
    n = NULL;
  }else{
    perror("**ERROR: Can't delete a Node that is NULL.");
  }
}

LL* new_LL(){
  LL* ll =  (LL*) malloc(sizeof(LL));
  ll->head =  NULL;
  ll->tail =  NULL;
  ll->size = 0;
  return ll;
}

void delete_LL(LL* ll){

	if( ll != NULL && *LL != NULL ){
	
	}

}


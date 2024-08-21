#include "LL.h"


// Node Structure
typedef struct Node{
  int data;
  Node* next;
  Node* prev;
}Node;

/**
 * @brief  Creates node.
 * @param  data: Integer to be stored in node.
 * @return Pointer to a Node.
 */
static Node* create_node(int data){

  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  node->prev = NULL;
  return node;
  
}

/**
 * @brief  Deletes Node in Linked List
 * @param  n:  n is a pointer to the pointer of the Node
 * comments: *n accesses the 'Node' pointed to by n
 */
static void delete_node(Node** n){

  if( n!=NULL && *n!=NULL ){
    free(*n);
    // After freeing, *n is set to NULL to ensure the original pointer is updated
    *n = NULL;
  }else{
    perror("**ERROR: Can't delete a Node that is NULL.");
  }

}

/**
 * @brief  Creates new Linked List.
 * @return new Linked List.
 */
LL* new_LL(){

  LL* ll =  (LL*) malloc(sizeof(LL));
  ll->head =  NULL;
  ll->tail =  NULL;
  ll->size = 0;
  return ll;

}

/**
 * @brief  deletes Linked List
 * @param  ll:. ll is a pointer to the pointer of the linked list
 */
void delete_LL(LL** ll){

	//TODO: CHECK SIZE OF THE LINKED LIST BEFORE DELETING
	if( ll != NULL && *ll != NULL ){
		Node* temp = NULL;
		while( (*ll)->head != NULL ){
			temp =  (*ll)->head;
			(*ll)->head = temp->next;
			delete_node(&temp);
		}
		(*ll)->tail = NULL;
		(*ll)->size = 0;
		free(*ll);
		*ll = NULL;
	}else{
		perror("**ERROR: Can't delete a Node that is NULL.");
	}

}

void LL_append(LL* ll, int data){
	
	Node* n = create_node(data);
	// if linked list is empty then we need both head and tail poiting t first node
	if( ll->size == 0 ){
		ll->head = n;
		ll->tail = n;
	}else{
		n->next = ll->head;
		ll->head->prev = n;
		ll->head = n;
	}
	ll->size++;

}

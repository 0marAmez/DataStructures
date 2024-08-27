#include <stdio.h>
#include "LL.h"

int main(void) {
  LL* list = new_list();
  append(list,48);
  append(list,49);
  append(list,50);
  append(list,51);
  append(list,52);
  print_list(list);
  printf("List size %d\n",len(list));

  delete_list(&list);
  
}

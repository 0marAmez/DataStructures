#include <stdio.h>
#include "LL.h"

int main(void) {
  LL* list = new_LL();
  LL_append(list,48);
  delete_LL(&list);
  
}

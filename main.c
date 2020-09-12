#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *test = list_alloc(2);
  list_print(test);
  list_add_to_back(test, 3);
  list_add_to_back(test, 4);
  list_length(test);
	list_add_to_front(test,1);
	list_print(test);
	list_is_in(test,3);
	list_get_index_of(test,1);
  return 0;
}
#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *test = list_alloc(2);
  list_print(test);
  list_add_to_back(test, 3);
  list_add_to_back(test, 4);
  printf("Checking length.\n");
  list_length(test);
  printf("Getting element at index.\n");
  printf("Value is %d \n",list_get_elem_at(test, 2));
  printf("Getting index of element.\n");
  list_get_index_of(test, 2);
  printf("Adding to front.\n");
	list_add_to_front(test,1);
	list_print(test);
  printf("Adding at index.\n");
  list_add_at_index(test, 4,3);
  list_print(test);
  printf("Checking if is in.\n");
	list_is_in(test,3);
	list_get_index_of(test,1);
  printf("Removing from the front.\n");
  list_remove_from_front(test);
  list_print(test);
  printf("Removing first index.\n");
  list_remove_at_index(test, 1);
  list_print(test);
  printf("Removing from the back.\n");
  list_remove_from_back(test);
  list_print(test);
  return 0;
}
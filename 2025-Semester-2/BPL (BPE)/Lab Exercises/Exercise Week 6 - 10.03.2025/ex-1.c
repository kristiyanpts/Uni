//
// Created by Kristiyan Petsanov on 10.03.25.
//

#include <stdio.h>

int main() {
  int number = 42;

  int *ptr_number;

  ptr_number = &number;

  printf("Value: %d\n", number);
  printf("Address: %p\n", &number);
  printf("Pointer value: %d\n", *ptr_number);
  printf("Pointer address: %p\n\n", ptr_number);

  return 0;
}
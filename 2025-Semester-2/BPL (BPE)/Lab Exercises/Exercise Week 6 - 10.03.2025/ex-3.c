//
// Created by Kristiyan Petsanov on 10.03.25.
//

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int *ptr_a = &a;
  int *ptr_b = &b;

  printf("Before swap:\n");
  printf("a = %d, b = %d\n", *ptr_a, *ptr_b);

  *ptr_a = *ptr_a + *ptr_b;
  *ptr_b = *ptr_a - *ptr_b;
  *ptr_a = *ptr_a - *ptr_b;

  printf("After swap:\n");
  printf("a = %d, b = %d\n", *ptr_a, *ptr_b);

  return 0;
}
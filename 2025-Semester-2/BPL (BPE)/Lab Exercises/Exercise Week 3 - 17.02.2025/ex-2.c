//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  int sum = a + b;
  int diff = a - b;
  int prod = a * b;
  int div = a / b;

  printf("Sum: %d\nDiff: %d\nProd: %d\nQuot: %d", sum, diff, prod, div);

  return 0;
}

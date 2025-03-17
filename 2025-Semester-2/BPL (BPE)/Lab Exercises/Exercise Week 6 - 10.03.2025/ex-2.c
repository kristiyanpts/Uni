//
// Created by Kristiyan Petsanov on 10.03.25.
//

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int *ptr_a = &a;
  int *ptr_b = &b;

  int sum = *ptr_a + *ptr_b;
  int diff = *ptr_a - *ptr_b;
  int product = *ptr_a * *ptr_b;
  double division = (double)*ptr_a / *ptr_b;

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", diff);
  printf("Product: %d\n", product);
  printf("Division: %lf\n", division);

  return 0;
}
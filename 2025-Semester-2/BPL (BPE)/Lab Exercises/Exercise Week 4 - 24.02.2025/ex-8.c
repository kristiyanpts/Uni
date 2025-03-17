//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  int fib = 1;
  int prev = 1;

  printf("1 ");
  while (fib <= a) {
    printf("%d ", fib);
    int temp = fib;
    fib += prev;
    prev = temp;
  }

  printf("\n");

  return 0;
}
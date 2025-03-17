//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int sum_digits(int a) {
  int sum = 0;

  while (a != 0) {
    sum += a % 10;
    a /= 10;
  }

  return sum;
}

int main() {
  int a;
  scanf("%d", &a);

  printf("%d\n", sum_digits(a));

  return 0;
}
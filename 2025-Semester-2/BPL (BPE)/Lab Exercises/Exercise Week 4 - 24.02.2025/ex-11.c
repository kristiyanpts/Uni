//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int count_digits(int a) {
  int count = 0;
  while (a != 0) {
    count++;
    a /= 10;
  }
  return count;
}

int main() {
  int a;
  scanf("%d", &a);

  printf("%d\n", count_digits(a));

  return 0;
}
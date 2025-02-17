//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int a;

  scanf("%d", &a);
  int b = a;

  printf("While loop: ");
  while (a != 0) {
    printf("%d", a % 10);
    a /= 10;
  }

  printf("\nFor loop: ");
  for (; b != 0; b /= 10) {
    printf("%d", b % 10);
  }

  return 0;
}

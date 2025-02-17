//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  printf("Max: %d", max);

  return 0;
}

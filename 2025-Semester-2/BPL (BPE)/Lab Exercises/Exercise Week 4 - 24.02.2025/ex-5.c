//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  int sum = 0;
  for (; a <=b; ++a) {
    if (a % 3 == 0) {
      sum += a;
    }
  }

  printf("%d\n", sum);

  return 0;
}
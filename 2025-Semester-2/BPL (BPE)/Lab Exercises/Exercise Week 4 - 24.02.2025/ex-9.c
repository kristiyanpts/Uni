//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int biggest_mutual_divisible(int a, int b) {
  int biggest = 0;
  for (int i = 1; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      biggest = i;
    }
  }
  return biggest;
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d\n", biggest_mutual_divisible(a, b));

  return 0;
}
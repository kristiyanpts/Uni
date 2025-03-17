//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int to_binary(int a) {
  int binary = 0;

  while (a != 0) {
    binary = binary * 10 + a % 2;
    a /= 2;
  }

  int binaryReversed = 0;
  while (binary != 0) {
    binaryReversed = binaryReversed * 10 + binary % 10;
    binary /= 10;
  }

  return binaryReversed;
}

int main() {
  int a;
  scanf("%d", &a);

  printf("%d\n", to_binary(a));

  return 0;
}
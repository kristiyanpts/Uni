//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  int biggestDigit = 0;

  while(a != 0) {
    int currentDigit = a % 10;
    if (currentDigit > biggestDigit) {
      biggestDigit = currentDigit;
    }
    a /= 10;
  }

  printf("%d", biggestDigit);

  return 0;
}
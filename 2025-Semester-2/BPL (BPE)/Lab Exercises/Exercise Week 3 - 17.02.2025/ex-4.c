//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int a;

  scanf("%d", &a);

  int digitSum = 0;

  digitSum += a % 10;
  a /= 10;

  digitSum += a % 10;
  a /= 10;

  digitSum += a % 10;
  a /= 10;

  digitSum += a % 10;
  a /= 10;

  printf("Sum of digits: %d", digitSum);

  return 0;
}

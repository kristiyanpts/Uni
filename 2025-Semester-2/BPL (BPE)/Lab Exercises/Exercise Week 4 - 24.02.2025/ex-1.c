//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }

  if (a > 0) {
    printf("Positive\n");
  } else if (a < 0) {
    printf("Negative\n");
  } else {
    printf("Zero\n");
  }

  if (a % 3 == 0 && a % 5 == 0) {
    printf("Divisible by 3 and 5\n");
  } else {
    printf("Not divisible by 3 and 5\n");
  }

  return 0;
}
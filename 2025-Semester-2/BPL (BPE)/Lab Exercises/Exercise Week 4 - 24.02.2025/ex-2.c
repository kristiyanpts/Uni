//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    printf("Triangle\n");

    if (a == b && b == c) {
      printf("Равностранен\n");
    } else if (a == b || b == c || a == c) {
      printf("Равнобедрен\n");
    } else {
      printf("Разностранен\n");
    }
  } else {
    printf("Not a triangle\n");
  }

  return 0;
}
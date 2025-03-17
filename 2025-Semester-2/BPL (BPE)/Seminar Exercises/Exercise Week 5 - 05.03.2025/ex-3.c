//
// Created by Kristiyan Petsanov on 5.03.25.
//

#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a == b && b == c) {
    printf("Числата са еднакви\n");
  } else {
    printf("Числата не са еднакви\n");
  }

  return 0;
}
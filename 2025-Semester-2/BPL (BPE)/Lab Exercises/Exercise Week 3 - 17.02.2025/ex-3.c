//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int a;

  scanf("%d", &a);

  int isEven = a % 2 == 0;

  printf(isEven ? "Even" : "Odd");

  return 0;
}

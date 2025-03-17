//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int is_simple(int a) {
  for (int i = 2; i < a; i++) {
    if (a % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int a;
  scanf("%d", &a);

  printf("%s\n", is_simple(a) ? "Simple" : "Not simple");

  return 0;
}
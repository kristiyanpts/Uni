//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  int original = a;
  int reversed = 0;

  while (a != 0) {
    reversed = reversed * 10 + a % 10;
    a /= 10;
  }

  if (original == reversed) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }

  return 0;
}
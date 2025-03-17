//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

int str_len(char str[]) {
  int len = 0;

  for (len = 0; str[len] != '\0'; len++);

  return len;
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Length of the string: %d\n", str_len(str));

  return 0;
}
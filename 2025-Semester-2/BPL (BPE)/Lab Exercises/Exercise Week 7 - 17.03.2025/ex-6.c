//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

void str_lower_to_upper(char *str) {
  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      *str = *str - ('a' - 'A');
    }
    str++;
  }
}


int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Before: %s\n", str);
  str_lower_to_upper(str);
  printf("After: %s\n", str);

  return 0;
}
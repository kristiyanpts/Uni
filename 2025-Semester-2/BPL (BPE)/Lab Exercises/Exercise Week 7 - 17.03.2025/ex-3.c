//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

int str_len(char str[]) {
  int len = 0;

  for (len = 0; str[len] != '\0'; len++);

  return len;
}

void letter_amount(char str[]) {
  char letters[str_len(str)];
  int letters_count[str_len(str)];

  int unique_count = 0;

  for (int i = 0; i < str_len(str); i++) {
    int found = 0;

    for (int j = 0; j < unique_count; j++) {
      if (letters[j] == str[i]) {
        letters_count[j]++;
        found = 1;
        break;
      }
    }

    if (!found) {
      letters[unique_count] = str[i];
      letters_count[unique_count] = 1;
      unique_count++;
    }
  }

  for (int i = 0; i < unique_count; i++) {
    printf("%c: %d\n", letters[i], letters_count[i]);
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  letter_amount(str);

  return 0;
}
//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

int word_amount(char str[]) {
  int words = 1;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      words++;
    }
  }

  return words;
}

int main() {
  char str[100];

  printf("Enter a sentence: ");
  fgets(str, sizeof(str), stdin);

  printf("Amount of words in the sentence: %d\n", word_amount(str));

  return 0;
}
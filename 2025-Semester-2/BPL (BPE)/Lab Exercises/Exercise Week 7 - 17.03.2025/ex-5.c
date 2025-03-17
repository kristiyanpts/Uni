//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

int str_vowels_count(char str[]) {
  int vowels = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
      vowels++;
    }
  }

  return vowels;
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Amount of vowels in the string: %d\n", str_vowels_count(str));

  return 0;
}
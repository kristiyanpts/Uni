//
// Created by Kristiyan Petsanov on 17.03.25.
//

#include <stdio.h>

int str_len(char str[]) {
  int len = 0;

  for (len = 0; str[len] != '\0'; len++);

  return len;
}

int str_compare(char str1[], char str2[]) {
  int result;
  int i = 0;

  while (str1[i]!='\0' && str2[i]!='\0') {
    if (str1[i] > str2[i]) {
      result = 1;
      break;
    } else if (str1[i] < str2[i]) {
      result = -1;
      break;
    }
    i++;
  }

  if (str1[i]=='\0' && str2[i]=='\0') {
    result = 0;
  } else if (str1[i]=='\0') {
    result = -1;
  } else {
    result = 1;
  }

  return result;
}

int main() {
  char str[100];
  char str2[100];

  printf("Enter string 1: ");
  scanf("%s", str);

  printf("Enter string 2: ");
  scanf("%s", str2);

  int result = str_compare(str, str2);

  if (result == 1) {
    printf("String 1 is bigger than string 2\n");
  } else if (result == -1) {
    printf("String 2 is bigger than string 1\n");
  } else {
    printf("The strings are equal\n");
  }

  return 0;
}
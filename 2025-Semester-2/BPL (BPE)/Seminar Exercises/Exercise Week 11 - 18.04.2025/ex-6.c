#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char *str1, char *str2) {
  if (strlen(str1) != strlen(str2)) {
    return 0;
  }

  int count[256] = {};

  for (int i = 0; str1[i] != '\0'; i++) {
    count[(unsigned char)tolower(str1[i])]++;
  }

  for (int i = 0; str2[i] != '\0'; i++) {
    count[(unsigned char)tolower(str2[i])]--;
  }

  for (int i = 0; i < 256; i++) {
    if (count[i] != 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  char str1[100], str2[100];

  printf("Enter first string: ");
  scanf("%99s", str1);

  printf("Enter second string: ");
  scanf("%99s", str2);

  if (areAnagrams(str1, str2)) {
    printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
  } else {
    printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
  }

  return 0;
}
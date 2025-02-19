//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  char symbol;
  printf("Enter a symbol: ");
  scanf("%c", &symbol);

  printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);
  printf("%c        %c\n", symbol, symbol);
  printf("%c        %c\n", symbol, symbol);
  printf("%c        %c\n", symbol, symbol);
  printf("%c%c%c%c%c%c%c%c%c%c\n", symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol, symbol);

  return 0;
}
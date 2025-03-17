//
// Created by Kristiyan Petsanov on 5.03.25.
//

#include <stdio.h>

int main() {
  int x, y;
  int x1, y1, x2, y2;

  printf("Въведи координатите на търсената точка: ");
  scanf("%d %d", &x, &y);

  printf("Въведи координатите на първия ъгъл на правоъгълника: ");
  scanf("%d %d", &x1, &y1);

  printf("Въведи координатите на втория ъгъл на правоъгълника: ");
  scanf("%d %d", &x2, &y2);

  if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2)) {
    printf("Inside\n");
  } else {
    printf("Outside\n");
  }

  return 0;
}
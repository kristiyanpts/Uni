//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int sum = 0;
  int count = 0;

  int num;
  while (1) {
    printf("Въведи число (0 - прекратяване): ");
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    count++;
    sum += num;
  }

  int avg = sum / count;

  printf("Брой: %d\n", count);
  printf("Сума: %d\n", sum);
  printf("Средно аритметично: %d\n", avg);

  return 0;
}
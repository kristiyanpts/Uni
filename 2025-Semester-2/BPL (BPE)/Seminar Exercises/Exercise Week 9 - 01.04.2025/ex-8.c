//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int* insert_number(int* arr, int* size, int number, int position) {
  int* newArr = (int*)malloc((*size + 1) * sizeof(int));

  for (int i = 0; i < position; i++) {
    newArr[i] = arr[i];
  }

  newArr[position] = number;

  for (int i = position; i < *size; i++) {
    newArr[i + 1] = arr[i];
  }

  free(arr);

  (*size)++;

  return newArr;
}

int main() {
  int size = 10;
  int* arr = (int*)malloc(size * sizeof(int));

  printf("Enter 10 initial numbers:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  int num, pos;
  printf("Enter number and position (enter 0 to stop):\n");

  while (1) {
    scanf("%d", &num);
    if (num == 0) break;

    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
      printf("Invalid position! Must be between 0 and %d\n", size);
      continue;
    }

    arr = insert_number(arr, &size, num, pos);
  }

  printf("Final array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);

  return 0;
}
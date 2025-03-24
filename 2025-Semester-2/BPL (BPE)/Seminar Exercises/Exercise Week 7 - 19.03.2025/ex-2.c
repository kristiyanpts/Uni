//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

int checkRelations(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (i % 2 == 1) {
      if (arr[i] <= arr[i - 1]) {
        return 0;
      }
    } else {
      if (arr[i] >= arr[i - 1]) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  if (checkRelations(arr, n)) {
    printf("The relations are satisfied.\n");
  } else {
    printf("The relations are not satisfied.\n");
  }

  return 0;
}
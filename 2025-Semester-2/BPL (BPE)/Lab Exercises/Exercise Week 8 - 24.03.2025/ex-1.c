//
// Created by Kristiyan Petsanov on 24.03.25.
//

#include <stdio.h>

int main() {
  int n;

  printf("Enter the number of elements in the two dimensional array: ");
  scanf("%d", &n);

  int arr[n][n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    printf("Enter the elements of row %d: ", i + 1);
    printf("\n");
    for (int j = 0; j < n; j++) {
      printf("Enter the element of column %d: ", j + 1);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("The elements of the main diagonal are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i][i]);
  }
  printf("\n");

  printf("The elements of the secondary diagonal are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i][n - i - 1]);
  }
  printf("\n");

  printf("The elements above the main diagonal are: ");
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
  }
  printf("\n");

  printf("The elements below the main diagonal are: ");
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d ", arr[i][j]);
    }
  }

  return 0;
}
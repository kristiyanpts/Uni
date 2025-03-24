//
// Created by Kristiyan Petsanov on 24.03.25.
//

#include <stdio.h>

void rotate_matrix_90degrees(int n, int arr[n][n]) {
  int rotated[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rotated[j][n - i - 1] = arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = rotated[i][j];
    }
  }
}

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

  printf("The original matrix is: ");
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  rotate_matrix_90degrees(n, arr);

  printf("The rotated matrix is: ");
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
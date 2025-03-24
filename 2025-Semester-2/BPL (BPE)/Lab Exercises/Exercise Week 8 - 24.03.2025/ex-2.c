//
// Created by Kristiyan Petsanov on 24.03.25.
//

#include <stdio.h>

int is_matrix_magic_cube(int n, int arr[n][n]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[0][i];
  }

  int sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum2 = 0;
    for (int j = 0; j < n; j++) {
      sum2 += arr[i][j];
    }
    if (sum2 != sum) {
      return 0;
    }
  }

  for (int i = 0; i < n; i++) {
    sum2 = 0;
    for (int j = 0; j < n; j++) {
      sum2 += arr[j][i];
    }
    if (sum2 != sum) {
      return 0;
    }
  }

  // sum2 = 0;
  // for (int i = 0; i < n; i++) {
  //   sum2 += arr[i][i];
  // }
  // if (sum2 != sum) {
  //   return 0;
  // }
  //
  // sum2 = 0;
  // for (int i = 0; i < n; i++) {
  //   sum2 += arr[i][n - i - 1];
  // }
  // if (sum2 != sum) {
  //   return 0;
  // }

  return 1;
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

  if (is_matrix_magic_cube(n, arr)) {
    printf("The matrix is a magic cube.\n");
  } else {
    printf("The matrix is not a magic cube.\n");
  }

  return 0;
}
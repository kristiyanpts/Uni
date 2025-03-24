//
// Created by Kristiyan Petsanov on 24.03.25.
//

#include <stdio.h>

int main() {
  int m, n;

  printf("Enter the number of rows and columns of the array: ");
  scanf("%d %d", &m, &n);

  int arr[m][n];

  int current_elem = 1;

  for (int i = 0; i < m; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < n; j++) {
        arr[i][j] = current_elem;
        current_elem++;
      }
    } else {
      for (int j = n - 1; j >= 0; j--) {
        arr[i][j] = current_elem;
        current_elem++;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
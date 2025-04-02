//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m;

  printf("Enter matrix dimensions (n m): ");
  scanf("%d %d", &n, &m);

  if (n < 3 || m < 3) {
    printf("Error: Matrix must be at least 3x3 to find a submatrix.\n");
    return 1;
  }

  int **matrix = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    matrix[i] = (int *)malloc(m * sizeof(int));
  }

  printf("Enter matrix elements:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  int maxSum;
  int maxRow = 0, maxCol = 0;

  for (int i = 0; i <= n-3; i++) {
    for (int j = 0; j <= m-3; j++) {
      int sum = 0;

      for (int r = i; r < i+3; r++) {
        for (int c = j; c < j+3; c++) {
          sum += matrix[r][c];
        }
      }

      if (i == 0 && j == 0) {
        maxSum = sum;
        break;
      }

      if (sum > maxSum) {
        maxSum = sum;
        maxRow = i;
        maxCol = j;
      }
    }
  }

  printf("\n Original matrix:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\nSubmatrix with the largest sum (%d):\n", maxSum);
  for (int i = maxRow; i < maxRow+3; i++) {
    for (int j = maxCol; j < maxCol+3; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}
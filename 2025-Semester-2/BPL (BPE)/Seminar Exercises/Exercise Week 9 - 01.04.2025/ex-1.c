//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int checkRows(int **matrix, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols - 1; j++) {
      if (matrix[i][j] >= matrix[i][j + 1]) {
        return 0;
      }
    }
  }
  return 1;
}

int checkColumns(int **matrix, int rows, int cols) {
  for (int j = 0; j < cols; j++) {
    for (int i = 0; i < rows - 1; i++) {
      if (matrix[i][j] <= matrix[i + 1][j]) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {
  int rows, cols;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int **matrix = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(cols * sizeof(int));
  }

  printf("Enter the matrix elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Element [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  int rowsAscending = checkRows(matrix, rows, cols);
  int columnsDescending = checkColumns(matrix, rows, cols);

  if (rowsAscending == 1 && columnsDescending == 1) {
    printf("The matrix meets both conditions.\n");
  } else {
    printf("The matrix does not meet the conditions.\n");

    if (!rowsAscending) {
      printf("- Rows are not in ascending order.\n");
    }
    if (!columnsDescending) {
      printf("- Columns are not in descending order.\n");
    }
  }

  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}
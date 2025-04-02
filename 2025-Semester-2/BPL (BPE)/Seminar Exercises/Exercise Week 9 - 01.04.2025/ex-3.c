//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

void swap_rows(int **matrix, int cols, int row1, int row2) {
  int *temp = matrix[row1];
  matrix[row1] = matrix[row2];
  matrix[row2] = temp;
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

  printf("Original matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  if (rows > 1) {
    swap_rows(matrix, cols, 0, rows - 1);
  }

  printf("Matrix after swapping first and last rows:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}
//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int getSurroundingSum(int **matrix, int rows, int cols, int row, int col) {
  int sum = 0;

  for (int i = row - 1; i <= row + 1; i++) {
    for (int j = col - 1; j <= col + 1; j++) {
      if (i >= 0 && i < rows && j >= 0 && j < cols && !(i == row && j == col)) {
        sum += matrix[i][j];
      }
    }
  }

  return sum;
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

  int maxSum;
  int maxRow = 0, maxCol = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      int currentSum = getSurroundingSum(matrix, rows, cols, i, j);

      if (i == 0 && j == 0) {
        maxSum = currentSum;
        break;
      }

      if (currentSum > maxSum) {
        maxSum = currentSum;
        maxRow = i;
        maxCol = j;
      }
    }
  }

  printf("Element with maximum surrounding sum: %d\n", matrix[maxRow][maxCol]);
  printf("Position: row %d, column %d\n", maxRow, maxCol);
  printf("Sum of surrounding elements: %d\n", maxSum);

  for (int i = 0; i < rows; i++) {
    free(matrix[i]);
  }
  free(matrix);

  return 0;
}
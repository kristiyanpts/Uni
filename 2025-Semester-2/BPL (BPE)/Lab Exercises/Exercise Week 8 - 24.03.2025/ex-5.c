//
// Created by Kristiyan Petsanov on 24.03.25.
//

#include <stdio.h>

int main() {
  int m, n;
  int p, q;

  printf("Enter the number of rows and columns of the array of the bigger matrix: ");
  scanf("%d %d", &m, &n);

  printf("Enter the number of rows and columns of the array of the smaller matrix: ");
  scanf("%d %d", &p, &q);

  int arr[m][n];
  int arr2[p][q];

  printf("Enter the elements of the bigger matrix: \n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter the element of row %d, column %d: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Enter the elements of the smaller matrix: \n");
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < q; j++) {
      printf("Enter the element of row %d, column %d: ", i + 1, j + 1);
      scanf("%d", &arr2[i][j]);
    }
  }

  int found = 0;
  int starting_row = -1;
  int starting_column = -1;

  for (int i = 0; i <= m - p; i++) {
    for (int j = 0; j <= n - q; j++) {
      int match = 1;
      for (int k = 0; k < p; k++) {
        for (int l = 0; l < q; l++) {
          if (arr[i + k][j + l] != arr2[k][l]) {
            match = 0;
            break;
          }
        }

        if (!match) break;
      }

      if (match) {
        found = 1;
        starting_row = i;
        starting_column = j;
        break;
      }
    }
    if (found) break;
  }

  if (found) {
    printf("Матрицата B се съдържа в А, започвайки от ред %d, колона %d. \n", starting_row, starting_column);
  } else {
    printf("Матрицата B не се съдържа в А. \n");
  }

  return 0;
}
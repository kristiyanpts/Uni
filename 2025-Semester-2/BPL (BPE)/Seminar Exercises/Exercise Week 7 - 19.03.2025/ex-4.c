//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

void rotate_array(int arr[], int n, int k) {
  int rotated[n];
  for (int i = 0; i < n; i++) {
    rotated[(i + k) % n] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    arr[i] = rotated[i];
  }
}

int main() {
  int n, k;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number of positions to rotate: ");
  scanf("%d", &k);

  rotate_array(arr, n, k);

  printf("The rotated array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
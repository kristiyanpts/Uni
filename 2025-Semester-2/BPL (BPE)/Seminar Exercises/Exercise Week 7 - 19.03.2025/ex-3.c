//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

void reverse_array(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
}

int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  reverse_array(arr, n);

  printf("The reversed array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
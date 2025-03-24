//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

void sort_descending(int arr[], int n) {
  int i, j;
  for(i = 0; i < n - 1; i++) {
    for(j = i + 1; j < n; j++) {
      if(arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the value for K: ");
  scanf("%d", &k);

  if (k <= 0 || k > n) {
    printf("Invalid value of K.\n");
    return 1;
  }

  sort_descending(arr, n);
  printf("The %d-th largest element is: %d\n", k, arr[k - 1]);

  return 0;
}
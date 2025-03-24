//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

void findLongestSubsequence(int arr[], int n, int *start, int *length) {
  int maxLength = 1;
  int currentLength = 1;
  int maxStart = 0;
  int currentStart = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i] == arr[i - 1]) {
      currentLength++;
    } else {
      if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
      }
      currentLength = 1;
      currentStart = i;
    }
  }

  if (currentLength > maxLength) {
    maxLength = currentLength;
    maxStart = currentStart;
  }

  *start = maxStart;
  *length = maxLength;
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

  int start, length;
  findLongestSubsequence(arr, n, &start, &length);

  printf("The longest sequence starts at index %d and has a length of %d.\n", start, length);

  return 0;
}
//
// Created by Kristiyan Petsanov on 10.03.25.
//

#include <stdio.h>

int main() {
  int nums[7];

  for (int i = 0; i < 7; i++) {
    printf("Enter a number between -5000 and 5000: ");
    scanf("%d", &nums[i]);

    if (nums[i] < -5000 || nums[i] > 5000) {
      printf("Invalid number\n");
      i--;
    }
  }

  int sum = 0;
  for (int i = 0; i < 7; i++) {
    sum += nums[i];
  }

  double avg = (double)sum / 7;
  printf("Average: %.3lf\n", avg);

  return 0;
}
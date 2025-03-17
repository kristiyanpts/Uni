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

  int biggest_num = nums[0];

  for (int i = 1; i < 7; i++) {
    if (nums[i] > biggest_num) {
      biggest_num = nums[i];
    }
  }

  printf("Biggest number: %d\n", biggest_num);
}
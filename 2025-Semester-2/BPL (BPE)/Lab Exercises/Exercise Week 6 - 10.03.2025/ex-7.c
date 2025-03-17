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
      printf("\nInvalid number\n");
      i--;
    }
  }

  int sum = 0;
  for (int i = 0; i < 7; i++) {
    sum += nums[i];
  }

  double avg = (double)sum / 7;

  int closest_to_avg = nums[0];
  int closest_index = 0;

  for (int i = 1; i < 7; i++) {
    if ((avg - nums[i]) * (avg - nums[i]) < (avg - closest_to_avg) * (avg - closest_to_avg)) {
      closest_to_avg = nums[i];
      closest_index = i + 1;
    }
  }

  printf("Средна стойност %.2f, най-близка стойност %d на %d позиция\n", avg, closest_to_avg, closest_index);

  return 0;
}
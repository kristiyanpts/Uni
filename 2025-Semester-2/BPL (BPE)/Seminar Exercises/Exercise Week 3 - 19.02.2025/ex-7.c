//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  double degrees;
  printf("Enter degrees to be converted into radians: ");
  scanf("%lf", &degrees);

  printf("%.2lf degrees is %.2lf radians\n", degrees, degrees * 3.14159 / 180);

  return 0;
}
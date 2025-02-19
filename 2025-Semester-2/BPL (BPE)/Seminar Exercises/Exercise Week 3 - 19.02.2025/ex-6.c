//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  double celsius;
  printf("Enter degrees in Celsius to be converted in Fahrenheit: ");
  scanf("%lf", &celsius);

  printf("%.2lf degrees Celsius is %.2lf degrees Fahrenheit\n", celsius, celsius * 1.8 + 32);

  return 0;
}
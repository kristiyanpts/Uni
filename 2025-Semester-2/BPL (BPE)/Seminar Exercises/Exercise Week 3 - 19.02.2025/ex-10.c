//
// Created by Kristiyan Petsanov on 19.02.25.
//
#include <stdio.h>
#include <math.h>

int main() {
  double degrees;
  printf("Enter the angle degrees to found its sinus, cosinus, tangens and cotangens: ");
  scanf("%lf", &degrees);

  double sinus = sin(degrees);
  double cosinus = cos(degrees);
  double tangens = tan(degrees);
  double cotangens = 1 / tangens;

  printf("The sinus of %.2lf degrees is %.2lf\n", degrees, sinus);
  printf("The cosinus of %.2lf degrees is %.2lf\n", degrees, cosinus);
  printf("The tangens of %.2lf degrees is %.2lf\n", degrees, tangens);
  printf("The cotangens of %.2lf degrees is %.2lf\n", degrees, cotangens);

  return 0;
}
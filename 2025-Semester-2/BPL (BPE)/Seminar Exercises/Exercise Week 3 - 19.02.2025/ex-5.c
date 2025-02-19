//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  double inches;
  printf("Enter a number in inches to be converted in mm, cm, dm and m: ");
  scanf("%lf", &inches);

  printf("%.2lf inches is %.2lf mm\n", inches, inches * 25.4);
  printf("%.2lf inches is %.2lf cm\n", inches, inches * 2.54);
  printf("%.2lf inches is %.2lf dm\n", inches, inches * 0.254);
  printf("%.2lf inches is %.2lf m\n", inches, inches * 0.0254);

  return 0;
}
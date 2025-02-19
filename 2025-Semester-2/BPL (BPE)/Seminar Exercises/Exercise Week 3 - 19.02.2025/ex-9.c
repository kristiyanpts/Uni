//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  double a, b, h;
  printf("Enter side a of the trapezoid: ");
  scanf("%lf", &a);
  printf("Enter side b of the trapezoid: ");
  scanf("%lf", &b);
  printf("Enter height h of the trapezoid: ");
  scanf("%lf", &h);

  double area = (a + b) * h / 2;
  printf("The area of the trapezoid is %.2lf\n", area);

  return 0;
}
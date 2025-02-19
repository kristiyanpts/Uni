//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double x1, y1, x2, y2, x3, y3;
  printf("Enter the coordinates of point A (x1 y1): ");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the coordinates of point B (x2 y2): ");
  scanf("%lf %lf", &x2, &y2);
  printf("Enter the coordinates of point C (x3 y3): ");
  scanf("%lf %lf", &x3, &y3);

  double area = fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;

  printf("The area of the triangle is %.2lf\n", area);

  return 0;
}
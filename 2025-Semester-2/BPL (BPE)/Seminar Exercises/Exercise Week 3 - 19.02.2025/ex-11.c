//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double x1, y1, x2, y2;
  printf("Enter the coordinates of point A (x1 y1): ");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the coordinates of point B (x2 y2): ");
  scanf("%lf %lf", &x2, &y2);

  double length = fabs(x2 - x1);
  double width = fabs(y2 - y1);
  double area = length * width;

  printf("The area of the rectangle is %.2lf\n", area);


  return 0;
}
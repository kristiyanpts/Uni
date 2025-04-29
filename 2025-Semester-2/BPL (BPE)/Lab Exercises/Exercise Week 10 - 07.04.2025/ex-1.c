//
// Created by Kristiyan Petsanov on 7.04.25.
//

#include <stdio.h>
#include <math.h>

typedef struct Point {
  int x;
  int y;
} TrianglePoint;

int main() {
  int n;
  printf("Enter the number of points: ");
  scanf("%d", &n);

  TrianglePoint points[n];

  printf("Enter the points (x y):\n");
  for (int i = 0; i < n; i++) {
      printf("Point %d: ", i + 1);
      scanf("%d %d", &points[i].x, &points[i].y);
  }

  printf("Side lengths:\n");
  for (int i = 0; i < n; i++) {
    int next = (i + 1) % n;
    double length = sqrt((points[next].x - points[i].x) * (points[next].x - points[i].x) +
                         (points[next].y - points[i].y) * (points[next].y - points[i].y));
    printf("Length of side %d: %.2f\n", i + 1, length);
  }

  return 0;
}
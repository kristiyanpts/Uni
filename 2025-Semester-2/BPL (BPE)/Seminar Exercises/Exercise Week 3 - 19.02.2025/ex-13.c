//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double w, h;
  scanf("%lf %lf", &w, &h);

  int width_cm = (int)(w * 100);
  int height_cm = (int)(h * 100);

  int total_columns = width_cm / 120;
  int columns = total_columns - 1;

  int rows = height_cm / 70;

  int workstations = columns * rows - 3;

  if(workstations < 0)
    workstations = 0;

  printf("%d", workstations);

  return 0;
}
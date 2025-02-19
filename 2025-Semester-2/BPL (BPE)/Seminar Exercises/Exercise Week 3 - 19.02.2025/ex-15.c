//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double n, w, l, m, o;
  printf("Enter the square side N: ");
  scanf("%lf", &n);
  printf("Enter the width W and lenght L of the tile: ");
  scanf("%lf %lf", &w, &l);
  printf("Enter the width M and lenght O of the bench: ");
  scanf("%lf %lf", &m, &o);

  double totalArea = n * n;
  double benchArea = m * o;
  double areaToTile = totalArea - benchArea;

  double tileArea = w * l;

  double numberOfTiles = areaToTile / tileArea;

  double timeNeeded = numberOfTiles * 0.2;

  printf("Tiles needed: %.2lf\n", numberOfTiles);
  printf("Time needed: %.2lf minutes\n", timeNeeded);

  return 0;
}
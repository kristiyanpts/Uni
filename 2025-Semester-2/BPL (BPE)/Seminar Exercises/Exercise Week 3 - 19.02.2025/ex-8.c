//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>;

int main() {
  double lev;
  printf("Enter a sum in bulgarian lev to be converted into american dollars, euro and british pounds: ");
  scanf("%lf", &lev);

  printf("%.2lf lev is %.2lf dollars\n", lev, lev * 0.56);
  printf("%.2lf lev is %.2lf euro\n", lev, lev * 0.51);
  printf("%.2lf lev is %.2lf british pounds\n", lev, lev * 0.45);

  return 0;
}
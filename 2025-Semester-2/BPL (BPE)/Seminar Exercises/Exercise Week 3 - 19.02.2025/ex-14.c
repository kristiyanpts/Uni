//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double price_vegetables, price_fruits, vegetables_kg, fruits_kg;
  printf("Enter the price of 1kg vegetables: ");
  scanf("%lf", &price_vegetables);
  printf("Enter the price of 1kg fruits: ");
  scanf("%lf", &price_fruits);
  printf("Enter the kilograms of vegetables: ");
  scanf("%lf", &vegetables_kg);
  printf("Enter the kilograms of fruits: ");
  scanf("%lf", &fruits_kg);

  double total_price_lv = price_vegetables * vegetables_kg + price_fruits * fruits_kg;
  double total_price_euro = total_price_lv * 0.51;

  printf("The total price in euro is %.2lf\n", total_price_euro);

  return 0;
}
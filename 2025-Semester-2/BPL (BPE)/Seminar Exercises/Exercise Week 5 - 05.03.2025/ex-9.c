//
// Created by Kristiyan Petsanov on 5.03.25.
//

#include <stdio.h>

int main() {
  int X, Y, Z, workers;

  printf("Въведи площ на лозето (кв. м): ");
  scanf("%d", &X);

  printf("Въведи килограми грозде за кв. м: ");
  scanf("%d", &Y);

  printf("Въведи литри вино, които искаш да получиш: ");
  scanf("%d", &Z);

  printf("Въведи брой работници: ");
  scanf("%d", &workers);

  double grapes_for_one_liter = 2.5;
  double total_grapes = X * Y;
  double grapes_for_wine = total_grapes * 0.4;
  double wine_produced = grapes_for_wine / grapes_for_one_liter;
  double wine_difference = wine_produced - Z;

  if (wine_difference < 0) {
    printf("Изработеното количество (%dл.), не достига желаното количество (%dл.)", (int)wine_produced, Z);
  } else {
    printf("Изработеното количество (%dл.), достига желаното количество (%dл.).\nОставащо количество, което да бъде разпределено между работниците: %dл.\n", (int)wine_produced, Z, (int)wine_difference);
    printf("Количество вино за работник: %dл.", (int)(wine_difference / workers));
  }

  return 0;
}

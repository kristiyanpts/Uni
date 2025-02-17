//
// Created by Christian Petsanov on 17.02.25.
//

#include <stdio.h>

int main() {
  int year;

  scanf("%d", &year);

  int isLeapYear = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

  printf(isLeapYear ? "Leap year" : "Not a leap year");

  return 0;
}

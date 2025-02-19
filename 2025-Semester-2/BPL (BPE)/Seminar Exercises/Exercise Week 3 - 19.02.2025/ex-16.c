//
// Created by Kristiyan Petsanov on 19.02.25.
//

#include <stdio.h>
#include <math.h>

int main() {
  double n, m, dollar_value;
  printf("Enter the working days in a month N: ");
  scanf("%lf", &n);
  printf("Enter the daily salary M: ");
  scanf("%lf", &m);
  printf("Enter the dollar value: ");
  scanf("%lf", &dollar_value);

  double total_monthly_income = n * m;
  double total_monthly_income_lv = total_monthly_income * dollar_value;
  double total_yearly_income_lv = total_monthly_income_lv * 12;
  total_yearly_income_lv += total_monthly_income_lv * 2.5;
  total_yearly_income_lv -= total_yearly_income_lv * 0.25;

  double avg_daily_income_lv = total_yearly_income_lv / 365;

  printf("%.2lf", avg_daily_income_lv);

  return 0;
}
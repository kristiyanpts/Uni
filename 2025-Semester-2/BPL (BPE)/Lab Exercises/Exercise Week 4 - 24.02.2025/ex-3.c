//
// Created by Kristiyan Petsanov on 24.02.25.
//

#include <stdio.h>

int main() {
  int month;

  scanf("%d", &month);

  if (month < 1 && month > 12) {
    printf("Invalid month\n");
    return 0;
  }

  switch(month) {
    case 1:
      printf("January (Winter)\n");
      break;
    case 2:
      printf("February (Winter)\n");
      break;
    case 3:
      printf("March (Spring)\n");
      break;
    case 4:
      printf("April (Spring)\n");
      break;
    case 5:
      printf("May (Spring)\n");
      break;
    case 6:
      printf("June (Summer)\n");
      break;
    case 7:
      printf("July (Summer)\n");
      break;
    case 8:
      printf("August (Summer)\n");
      break;
    case 9:
      printf("September (Autumn)\n");
      break;
    case 10:
      printf("October (Autumn)\n");
      break;
    case 11:
      printf("November (Autumn)\n");
      break;
    case 12:
      printf("December (Winter)\n");
      break;
  }

  return 0;
}
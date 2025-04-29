#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define CHAIR_PRICE 13.99
#define TABLE_PRICE 42.00
#define SIX_CUPS_PRICE 5.98
#define SIX_PLATES_PRICE 21.02

int main() {
  int chairs_count = 0;
  int tables_count = 0;
  int cups_count = 0;
  int plates_count = 0;

  int people = 0;
  printf("Please enter the number of people for your party: ");
  scanf("%d", &people);

  char command[100];

  while (1) {
    scanf("%s", command);

    if (strcmp(command, "PARTY!") == 0) {
      break;
    }

    if (strcmp(command, "Table") == 0) {
      tables_count++;
    } else if (strcmp(command, "Chair") == 0) {
      chairs_count++;
    } else if (strcmp(command, "Cups") == 0) {
      cups_count++;
    } else if (strcmp(command, "Dishes") == 0) {
      plates_count++;
    } else {
      printf("Invalid command. Please enter a valid command.\n");
    }
  }

  float total_price = (chairs_count * CHAIR_PRICE) + (tables_count * TABLE_PRICE) + (cups_count * SIX_CUPS_PRICE) + (plates_count * SIX_PLATES_PRICE);
  printf("%.2f", total_price);

  int tables_needed = (int)ceil((float)people / 8);
  int chairs_needed = people;
  int cups_needed = (int)ceil((float)people / 6);
  int plates_needed = (int)ceil((float)people / 6);

  if (tables_needed > tables_count) {
    printf("\nYou need %d more tables.", tables_needed - tables_count);
  }
  if (chairs_needed > chairs_count) {
    printf("\nYou need %d more chairs.", chairs_needed - chairs_count);
  }
  if (cups_needed > cups_count) {
    printf("\nYou need %d more set of cups.", cups_needed - cups_count);
  }
  if (plates_needed > plates_count) {
    printf("\nYou need %d more set of plates.", plates_needed - plates_count);
  }

  return 0;
}
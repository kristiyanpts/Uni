//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m;
  printf("Enter the number of people (N): ");
  scanf("%d", &n);
  printf("Enter the number of friendships (M): ");
  scanf("%d", &m);

  int** friendships = (int**)calloc(n + 1, sizeof(int*));
  for (int i = 0; i <= n; i++) {
    friendships[i] = (int*)calloc(n + 1, sizeof(int));
  }

  printf("Enter the %d friendships (person1 person2):\n", m);
  for (int i = 0; i < m; i++) {
    int person1, person2;
    scanf("%d %d", &person1, &person2);

    friendships[person1][person2] = 1;
    friendships[person2][person1] = 1;
  }

  while (1) {
    int person;
    printf("\nEnter a person number (0 to exit): ");
    scanf("%d", &person);

    if (person == 0) {
      break;
    }

    if (person < 1 || person > n) {
      printf("Invalid person number. Must be between 1 and %d.\n", n);
      continue;
    }

    int friendCount = 0;
    for (int i = 1; i <= n; i++) {
      if (friendships[person][i] == 1) {
        friendCount++;
      }
    }

    printf("Person %d has %d friend(s).\n", person, friendCount);
  }

  for (int i = 0; i <= n; i++) {
    free(friendships[i]);
  }
  free(friendships);

  return 0;
}
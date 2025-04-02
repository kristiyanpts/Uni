//
// Created by Kristiyan Petsanov on 2.04.25.
//
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
  if (num <= 1) return 0;
  if (num <= 3) return 1;
  if (num % 2 == 0 || num % 3 == 0) return 0;

  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0)
      return 0;
  }

  return 1;
}

int main() {
  int n;
  printf("Enter array size: ");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  printf("Enter %d integers:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int primeCount = 0;
  for (int i = 0; i < n; i++) {
    if (is_prime(arr[i]) == 1) {
      primeCount++;
    }
  }

  int *primes = (int *)malloc(primeCount * sizeof(int));

  int *nonPrimes = (int *)malloc((n - primeCount) * sizeof(int));

  int primeIndex = 0, nonPrimeIndex = 0;
  for (int i = 0; i < n; i++) {
    if (is_prime(arr[i]) == 1) {
      primes[primeIndex++] = arr[i];
    } else {
      nonPrimes[nonPrimeIndex++] = arr[i];
    }
  }

  printf("\nArray of non-prime numbers: ");
  for (int i = 0; i < nonPrimeIndex; i++) {
    printf("%d ", nonPrimes[i]);
  }

  printf("\nArray of prime numbers: ");
  for (int i = 0; i < primeIndex; i++) {
    printf("%d ", primes[i]);
  }
  printf("\n");

  free(arr);
  free(primes);
  free(nonPrimes);

  return 0;
}
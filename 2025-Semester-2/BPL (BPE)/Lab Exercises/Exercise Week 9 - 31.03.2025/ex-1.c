//
// Created by Kristiyan Petsanov on 31.03.25.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(m * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < m; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr1[i];
    }
    for (int i = 0; i < m; i++) {
        sum += arr2[i];
    }

    int total_elements = n + m;
    double average = (double)sum / total_elements;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    free(arr1);
    free(arr2);

    return 0;
}
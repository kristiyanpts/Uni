//
// Created by Kristiyan Petsanov on 31.03.25.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);

    int *arr1 = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    int add_more = 0;
    printf("Do you want to add more elements? (1 for yes, 0 for no): ");
    scanf("%d", &add_more);

    if (add_more == 1) {
        printf("Enter the number of additional elements: ");
        scanf("%d", &m);

        int *arr2 = (int *)realloc(arr1, (n + m) * sizeof(int));
        if (arr2 == NULL) {
            printf("Memory reallocation failed\n");
            free(arr1);
            return 1;
        }
        free(arr1);
        arr1 = arr2;

        printf("Enter the additional elements:\n");
        for (int i = n; i < n + m; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &arr1[i]);
        }
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < n + (add_more == 1 ? m : 0); i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");
    free(arr1);


    return 0;
}
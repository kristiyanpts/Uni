#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

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

    int *arr3 = (int *)malloc((n + m) * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation failed\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        arr3[n + i] = arr2[i];
    }

    bubble_sort(arr3, n + m);

    printf("Sorted merged array:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr3[i]);
    }

    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}
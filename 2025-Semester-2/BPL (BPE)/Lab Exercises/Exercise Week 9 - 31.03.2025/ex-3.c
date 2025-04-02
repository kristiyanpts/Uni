#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
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

    int remove_element = 0;
    printf("Do you want to remove an element? (1 for yes, 0 for no): ");
    scanf("%d", &remove_element);

    if (remove_element == 1) {
        int element_to_remove;
        printf("Enter the element to remove: ");
        scanf("%d", &element_to_remove);

        int found_index = -1;
        for (int i = 0; i < n; i++) {
            if (arr1[i] == element_to_remove) {
                found_index = i;
                break;
            }
        }

        if (found_index != -1) {
            for (int i = found_index; i < n - 1; i++) {
                arr1[i] = arr1[i + 1];
            }

            int *temp = (int *)realloc(arr1, (n - 1) * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(arr1);
                return 1;
            }

            free(arr1);
            arr1 = temp;
            n--;
        } else {
            printf("Element not found\n");
        }
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");
    free(arr1);

    return 0;
}
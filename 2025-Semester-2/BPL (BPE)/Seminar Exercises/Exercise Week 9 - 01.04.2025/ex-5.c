//
// Created by Kristiyan Petsanov on 2.04.25.
//

#include <stdio.h>
#include <stdlib.h>

int* add(int pos, int num, int *arr, int len) {
    int* newArr = (int*)malloc((len + 1) * sizeof(int));

    for (int i = 0; i < pos; i++) {
        newArr[i] = arr[i];
    }

    newArr[pos] = num;

    for (int i = pos; i < len; i++) {
        newArr[i + 1] = arr[i];
    }

    free(arr);

    return newArr;
}

int* delete(int num, int *arr, int len, int *newLen) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    if (count == 0) {
        *newLen = len;
        return arr;
    }

    int newSize = len - count;
    int* newArr = (int*)malloc(newSize * sizeof(int));

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] != num) {
            newArr[j] = arr[i];
            j++;
        }
    }

    *newLen = newSize;

    free(arr);

    return newArr;
}

void smallest(int k, int *arr, int len) {
    if (k <= 0 || k > len) {
        printf("Invalid position for smallest command\n");
        return;
    }

    int *temp = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }

    printf("The %d-th smallest number is: %d\n", k, temp[k - 1]);

    free(temp);
}

int main() {
    int n;
    printf("Enter the initial array size: ");
    scanf("%d", &n);

    int *numbers = (int *)malloc(n * sizeof(int));
    int len = n;

    printf("Enter the initial array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int choice;
    do {
        printf("\nChoose operation:\n");
        printf("1: add(position, value)\n");
        printf("2: delete(value)\n");
        printf("3: smallest(K)\n");
        printf("0: Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int pos, value;
                printf("Enter position (0-%d): ", len);
                scanf("%d", &pos);
                if (pos < 0 || pos > len) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value: ");
                scanf("%d", &value);

                numbers = add(pos, value, numbers, len);
                len++;

                printf("Array after addition: ");
                for (int i = 0; i < len; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("\n");
                break;
            }

            case 2: {
                int value;
                printf("Enter value to delete: ");
                scanf("%d", &value);

                numbers = delete(value, numbers, len, &len);

                printf("Array after deletion: ");
                for (int i = 0; i < len; i++) {
                    printf("%d ", numbers[i]);
                }
                printf("\n");
                break;
            }

            case 3: {
                int k;
                printf("Enter K (1-%d): ", len);
                scanf("%d", &k);
                smallest(k, numbers, len);
                break;
            }

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    free(numbers);
    return 0;
}
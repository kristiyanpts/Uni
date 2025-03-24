#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("No elements provided.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxLength = 1, currentLength = 1;
    int maxStart = 0, currentStart = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentStart = i;
            currentLength = 1;
        }
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
    }

    printf("Longest sequence: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
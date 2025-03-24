#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("No elements to process.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter a target number: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                printf("Sequence found: ");
                for (int k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("Sequence doesn't exist.\n");
    }

    return 0;
}
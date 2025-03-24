//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("No elements to process.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int best_inc_start = 0, best_inc_length = 1;
    int current_inc_start = 0, current_inc_length = 1;

    int best_dec_start = 0, best_dec_length = 1;
    int current_dec_start = 0, current_dec_length = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_inc_length++;
        } else {
            if (current_inc_length > best_inc_length) {
                best_inc_length = current_inc_length;
                best_inc_start = current_inc_start;
            }
            current_inc_start = i;
            current_inc_length = 1;
        }

        if (arr[i] < arr[i - 1]) {
            current_dec_length++;
        } else {
            if (current_dec_length > best_dec_length) {
                best_dec_length = current_dec_length;
                best_dec_start = current_dec_start;
            }
            current_dec_start = i;
            current_dec_length = 1;
        }
    }

    if (current_inc_length > best_inc_length) {
        best_inc_length = current_inc_length;
        best_inc_start = current_inc_start;
    }
    if (current_dec_length > best_dec_length) {
        best_dec_length = current_dec_length;
        best_dec_start = current_dec_start;
    }

    printf("Longest strictly increasing subsequence: ");
    for (int i = best_inc_start; i < best_inc_start + best_inc_length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Longest strictly decreasing subsequence: ");
    for (int i = best_dec_start; i < best_dec_start + best_dec_length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
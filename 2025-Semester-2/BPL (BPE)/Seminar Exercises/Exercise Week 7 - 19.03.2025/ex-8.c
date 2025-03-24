//
// Created by Kristiyan Petsanov on 19.03.25.
//

#include <stdio.h>

#define MAX_SIZE 20  

void insert_number(int arr[], int *size, int num, int pos) {
    if (*size >= MAX_SIZE) {
        printf("Array is full!\n");
        return;
    }
    
    if (pos < 0 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = num;
    (*size)++;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE] = {0}; 
    int size = 10;  
   
    printf("Enter 10 numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int num, pos;
    while (1) {
        printf("Enter a number and position (0 to end): ");
        scanf("%d", &num);
        if (num == 0) break;
        scanf("%d", &pos);

        insert_number(arr, &size, num, pos);
    }
    
    printf("Result: ");
    print_array(arr, size);

    return 0;
}
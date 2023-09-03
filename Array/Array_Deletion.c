#include<stdio.h>

void display(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}
int indDeletion(int arr[], int size, int capacity, int index) {
    for(int i = index; i < size-1; i++ ) {
        arr[i] = arr[i+1];
    }
}
int main() {
    int arr[100] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    int capacity = 100;
    int element = 50;
    int index = 4;

    printf("Before Deletion :\n");
    display(arr, size);

    printf("\nAfter Deletion :\n");
    indDeletion(arr, size, capacity, index);
    size -= 1;
    display(arr, size);


    return 0;
}
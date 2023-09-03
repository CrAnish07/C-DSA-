#include<stdio.h>

void display(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}
int indexInsertion(int arr[], int size, int capacity, int element, int index) {
    if(size>=capacity) {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;

}
int main() {
    int arr[100] = {5, 10, 15, 25, 30};
    int size = 5;
    int capacity = 100;
    int element = 20;
    int index = 3;

    printf("Before Insetion :\n");
    display(arr, size);

    printf("\nAfter Insetion :\n");
    indexInsertion(arr, size, capacity, element, index);
    size += 1;
    display(arr, size);
    return 0;
}
#include<stdio.h>

//Time Complexity : Worst Case : O(n^2)
//Time Complexity : Best Case : O(n)


void display(int A[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
}
void insertionSort(int A[], int n) {
    int temp, i, j;
    for(i = 1; i <= n-1; i++) {
        temp = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > temp) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int main() {

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A)/sizeof(int);

    printf("Before Sorting :");
    display(A, n);
    printf("After Sorting :");
    insertionSort(A, n);
    display(A, n);
    return 0;
}
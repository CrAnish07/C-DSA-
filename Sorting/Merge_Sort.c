#include<stdio.h>

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void mergeSort(int a[], int lb, int ub){
    if(lb<ub){
       int mid;
       mid = (lb+ub)/2; 

       mergeSort(a, lb, mid);
       mergeSort(a, mid+1, ub);
       merge(a, lb, mid, ub);
    }
}

void merge(int a[], int lb, int mid, int ub) {
    int i, j, k;
    i = lb;
    j = mid+1;
    k = lb;

    while(i<mid && j<=ub){
        if(a[i] <= a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
}

int main() {
    int a[] = {12, 54, 65, 7, 23, 9};
    // int A[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(A)/sizeof(int);
    int lb = a[0];
    int ub = a[n-1];
    printf("Before Sorting :\n");
    printarry(a, n);
    printf("\nAfter Sorting :\n");
    mergeSort(a, n); 
    printarry(a, n); 
    return 0;
}
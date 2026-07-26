#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && (arr[j] >key)) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void printArr(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}
int main(void) {
    int arr[5] = {5, 4, 3, 1, 2};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);

    insertionSort(arr, n);
    printf("\nSortedArray: \n");

    printArr(arr, n);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Lomunto partition

//function to swap two elementss
void swap(int* a, int* b) {
    int t = *a;
    *a=*b;
    *b = t;
}

//take the last element as pivot
//place the pivot in its correct position in sorted array
//smaller elements are placed in the left of the pivot and the greater elements are placed to the right 

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low-1); //index of smaller element
    int j = low;

    for(j; j<=high-1; j++){
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

//low is index at 0 and high arr[i-1]
void quickSort(int arr[], int low, int high) {
    if(low < high) {
        //pi is the partition index
        int pi = partition(arr, low, high);

        //separately sort elements before and after partition
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void printArr(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array\n");
    printArr(arr, n);

    quickSort(arr, 0, n-1);
    printf("Sorted array\n");
    printArr(arr, n);
    return 0;
}

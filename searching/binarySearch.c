#include <stdio.h>

int binarySearch(int arr[], int n, int target){
    int low, high;
    low = 0;
    high = n-1;

    while(low<high) {
        int mid = low + (high-low)/2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid+1;
        else
            high = mid-1;
    }

    return -1;
}

int main() {
    int arr[] = { 2, 4 , 6, 8, 10, 12};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = binarySearch(arr, n, target);
    if (result == -1) printf("The value does not exist in the array");
    else printf("The value %d is present at index %d", target, result);
}


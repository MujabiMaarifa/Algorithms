#include <stdio.h>

int recursiveBinarySearch(int arr[], int low, int high, int target) {
    int mid = low + (high-low);
    if (low > high) return -1;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target)
        return recursiveBinarySearch(arr, mid+1, high, target);
    else
        return recursiveBinarySearch(arr, low, mid-1, target);
}


int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int low=0, high, target;
    high = n-1;
    target = 4;
    int result = recursiveBinarySearch(arr, low, high, target);
    if (result == -1) 
        printf("The element you are looking for is not found in the array!!");
    else
        printf("The value is searched and found in index %d", result);
    return 0;
}


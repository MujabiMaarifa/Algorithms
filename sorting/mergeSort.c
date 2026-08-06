#include <stdio.h>

void printArr(int arr[], size_t n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }
}

int main() {
    int arr[5] = {23, 1, 10, 5, 2};
    size_t n = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, n);
    return 0;
}

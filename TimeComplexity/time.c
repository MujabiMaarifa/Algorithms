#include <stdio.h>

int sumOfList(int A[], int n) {
    int sum = 0, i;
    for (i=0; i<n; i++)
        sum = sum+A[i];
    return sum;
}

int main() {
    int Arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(Arr) / sizeof(Arr[0]);
    int sum = sumOfList(Arr, n);
    printf("The sum is: %d\n", sum);
    return 0;
}

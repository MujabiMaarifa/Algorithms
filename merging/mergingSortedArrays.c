#include <stdio.h>

void merge(int nums1[], int nums2[], int nums3[], int m, int n) {
    int i=0, j=0, k=0;

    //checks if the indexes points at some value
    while(i<m && j<n) {
        if(nums1[i]<nums2[j]) 
            nums3[k++]=nums1[i++];
        else
            nums3[k++]=nums2[j++];
    }

    //handles the leftovers
    while(i<m)
        nums3[k++]=nums1[i++];
    while(j<n)
        nums3[k++]=nums2[j++];
}
void display(int nums3[], int n) {
    int i=0;
    for(i=0; i<n; i++) {
        printf("%d ,", nums3[i]);
    }
}

int main(void) {
    int nums1[] = {1, 2, 3, 4};

    int nums2[] = {4, 5};

    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);

    int nums3[m+n];
    merge(nums1, nums2, nums3, m, n);
    display(nums3, m+n);
}

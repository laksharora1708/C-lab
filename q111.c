//Q111: First negative integer in each subarray of size k

#include <stdio.h>
#include <stdlib.h>

void first_negative_in_window(int *arr, int n, int k) {
    for (int i=0; i<=n-k; i++) {
        int neg = 0;
        for (int j=i; j<i+k; j++) {
            if (arr[j]<0) {
                neg = arr[j];
                break;
            }
        }
        printf("%d%s", neg, i<n-k ? " " : "\n");
    }
}

int main() {
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    first_negative_in_window(arr,n,k);
    return 0;
}
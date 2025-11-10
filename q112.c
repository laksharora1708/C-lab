//Q112: Maximum sum of contiguous subarray 

#include <stdio.h>
#include <stdlib.h>

int kadane(int *arr, int n) {
    int max_sum = arr[0], curr_sum = arr[0];
    for (int i=1; i<n; i++) {
        curr_sum = (arr[i] > curr_sum + arr[i]) ? arr[i] : curr_sum + arr[i];
        max_sum = (curr_sum > max_sum) ? curr_sum : max_sum;
    }
    return max_sum;
}

int main() {
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", kadane(arr,n));
    return 0;
}
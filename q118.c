//Q118: Find missing number from 0 to n

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {3,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = n*(n+1)/2;
    int sum=0;
    for (int i=0; i<n; i++) sum += arr[i];
    printf("%d\n", total - sum);
    return 0;
}
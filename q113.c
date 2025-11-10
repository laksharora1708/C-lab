//Q113: Find kth smallest element

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    qsort(arr, n, sizeof(int), cmpfunc);
    printf("%d\n", arr[k-1]);
    return 0;
}
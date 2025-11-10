//Q119: Find repeated element

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1,2,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0; i<n; i++) {
        int val = abs(arr[i]);
        if (arr[val] < 0) {
            printf("%d\n", val);
            break;
        }
        arr[val] = -arr[val];
    }
    return 0;
}
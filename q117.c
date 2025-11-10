//Q117: Merge two sorted arrays

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int i=0, j=0;
    while (i<n1 && j<n2) {
        if (arr1[i]<arr2[j]) printf("%d ", arr1[i++]);
        else printf("%d ", arr2[j++]);
    }
    while (i<n1) printf("%d ", arr1[i++]);
    while (j<n2) printf("%d ", arr2[j++]);
    printf("\n");
    return 0;
}
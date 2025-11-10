// Q68: Delete element from array

#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);
    int arr[100];
  
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) return 0;
    for(i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
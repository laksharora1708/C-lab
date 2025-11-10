// Q66: Insert in sorted array

#include <stdio.h>

int main() {
    int n, i, key, pos = 0;
    scanf("%d", &n);
    int arr[100];
    
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] > key) break;
    }
    pos = i;
    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = key;
    n++;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
// Q67: Insert element at given position

#include <stdio.h>

int main() {
    int n, i, pos, val;
    scanf("%d", &n);
    int arr[100];
  
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d%d", &pos, &val);
    if(pos < 0 || pos > n) return 0;
    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
// Q78: Find sum of main diagonal elements

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int matrix[n][n];
  
    for(i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < n; i++)
        sum += matrix[i][i];
    printf("%d\n", sum);
    return 0;
}
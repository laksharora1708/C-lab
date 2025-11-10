// Q77: Check if elements on the diagonal are distinct

#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    scanf("%d", &n);
    int matrix[n][n];

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for(i = 0; i < n && distinct; i++)
        for(j = i+1; j < n; j++)
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }

    if(distinct) printf("Diagonal elements distinct\n");
    else printf("Diagonal elements not distinct\n");
    return 0;
}
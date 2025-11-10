// Q79: Perform diagonal traversal of a matrix

#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
  
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);

    for(int k = 0; k < r + c - 1; k++) {
        for(i = 0; i <= k; i++) {
            j = k - i;
            if(i < r && j < c)
                printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    return 0;
}

// Q45: Calculate the sum of the series 2/3 + 4/7 + 6/11 + ... up to n terms

#include <stdio.h>

int main() {
    int n, i, numerator = 2, denominator = 3;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
  
    for(i = 0; i < n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
  
    printf("Sum of the series: %.2f\n", sum);
    return 0;
}
/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float cost_price, selling_price;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost_price, &selling_price);

    float profit_loss = selling_price - cost_price;
    float percentage = (profit_loss / cost_price) * 100;

    if (profit_loss > 0) {
        printf("Profit %.2f%%\n", percentage);
    } else if (profit_loss < 0) {
        printf("Loss %.2f%%\n", -percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
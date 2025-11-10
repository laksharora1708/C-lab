//Q116: Two-sum indices for target sum

#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[] = {2,7,11,15};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 9;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
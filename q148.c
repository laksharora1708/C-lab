//Q148: Take two structs as input and check if they are identical.//

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>

enum Color { RED, GREEN, BLUE };

struct Pixel {
    int x;
    int y;
    enum Color color;
};

int areEqual(struct Pixel a, struct Pixel b) {
    return (a.x == b.x) && (a.y == b.y) && (a.color == b.color);
}

int main() {
    struct Pixel p1, p2;

    printf("Enter x, y, color (0-RED, 1-GREEN, 2-BLUE) for first pixel: ");
    scanf("%d %d %d", &p1.x, &p1.y, (int*)&p1.color);
  
    printf("Enter x, y, color (0-RED, 1-GREEN, 2-BLUE) for second pixel: ");
    scanf("%d %d %d", &p2.x, &p2.y, (int*)&p2.color);
  
    if (areEqual(p1, p2)) {
        printf("The two pixels are identical.\n");
    } else {
        printf("The two pixels are NOT identical.\n");
    }

    return 0;
}
//Q97-Print the initials of a name

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[100];
    int i;
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);
    char toUpper(char c) {
        if (c >= 'a' && c <= 'z') {
            return c - ('a' - 'A');
        }
        return c;
    }
    if (name[0] != '\0' && name[0] != '\n') {
        printf("%c", toUpper(name[0]));
    }
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf(" %c", toUpper(name[i + 1]));
        }
    }
    printf("\n");
    return 0;
}

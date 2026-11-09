#include <stdio.h>

int main() {
    char name[100];
    int i, space = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Print initials of first and middle names
    printf("%c", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            space = i;
        }
    }

    for (i = 1; i < space; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ')
            printf(". %c", name[i]);
    }

    // Print surname in full
    printf(". ");
    for (i = space + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}
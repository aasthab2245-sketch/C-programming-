#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            end = i - 1;

            for (; start <= end; start++, end--) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
            }

            start = i + 1;
        }
    }

    printf("After reversing each word: %s", str);

    return 0;
}
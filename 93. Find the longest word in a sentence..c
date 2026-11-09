#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;

                for (int k = 0; k <= j; k++) {
                    longest[k] = word[k];
                }
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}
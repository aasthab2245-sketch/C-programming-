#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Starting from the first row
    for (d = 0; d < cols; d++) {
        i = 0;
        j = d;

        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Starting from the second row
    for (d = 1; d < rows; d++) {
        i = d;
        j = cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
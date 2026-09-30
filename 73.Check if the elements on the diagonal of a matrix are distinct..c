#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, distinct = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("The diagonal elements are distinct.\n");
    else
        printf("The diagonal elements are not distinct.\n");

    return 0;
}
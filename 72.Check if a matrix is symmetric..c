#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, symmetric = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
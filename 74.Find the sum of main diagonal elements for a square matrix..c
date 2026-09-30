#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, sum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
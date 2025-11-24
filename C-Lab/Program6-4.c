// Write A C program to find sum of elemnts of two Dimensional Matrices.
#include <stdio.h>
int main() {
    int a[10][10];
    int r, c, i, j;
    int sumA = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sumA += a[i][j]; // Summing elements of first matrix
        }
    printf("Sum of elements of the first matrix: %d\n", sumA);
    return 0;
}
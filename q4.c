#include <stdio.h>

int main() {
    int a[10][10];
    int rows, cols, i, j, rowNum, colNum;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the row number to sum: ");
    scanf("%d", &rowNum);
    printf("Enter the column number to sum: ");
    scanf("%d", &colNum);

    // Sum of given row
    for (j = 0; j < cols; j++) {
        rowSum += a[rowNum][j];
    }

    // Sum of given column
    for (i = 0; i < rows; i++) {
        colSum += a[i][colNum];
    }

    printf("Sum of elements in row %d: %d\n", rowNum, rowSum);
    printf("Sum of elements in column %d: %d\n", colNum, colSum);

    return 0;
}
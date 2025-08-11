#include<stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d %d", &n, &m);

    int a[n][m], transpose[m][n];

    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("The transpose matrix of an array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}



    
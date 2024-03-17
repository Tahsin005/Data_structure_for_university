#include<stdio.h>
int main() {
    int n, m;
    printf("Enter the number of rows and columns of the first matrix : ");
    scanf("%d %d\n", &n, &m);

    int matrix1[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int x, y;
    printf("Enter the number of rows and columns of the second matrix : ");
    scanf("%d %d\n", &x, &y);
    int matrix2[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (n == x && m == y) {
        int ans[x][y];
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                ans[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        printf("The resultant matrix is : \n");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("These two matrices couldn't be added");
    }
    return 0;
}

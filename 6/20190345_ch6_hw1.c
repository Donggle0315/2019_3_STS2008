#include <stdio.h>
int mulmatrix(int(*ptr1)[4], int(*ptr2)[4], int x, int y, int z);
int main() {
    int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int b[3][4] = { {1,4,7,10},{2,5,8,11},{3,6,9,12} };

    int i, j, m, n;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (m = 0; m < 3; m++) {
        for (n = 0; n < 4; n++) {
            printf("%d ", b[m][n]);
        }
        printf("\n");
    }
    printf("\n");
    int c[3][4];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mulmatrix(a, b, i, j, m));
        }
        printf("\n");
    }
    return 0;
}

int mulmatrix(int(*ptr1)[3], int(*ptr2)[4], int x, int y, int z) {

    int k;
    int sum = 0;

    for (k = 0; k < z; k++) {
        sum += ptr1[x][k] * ptr2[k][y];
    }
    return sum;
}
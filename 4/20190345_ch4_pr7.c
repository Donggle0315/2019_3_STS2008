#include <stdio.h>
void main() {
	int x[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			x[i][j] = 3 * i + j + 1;
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int y[3][4];
	int m, n;
	for (m = 0; m < 3; m++) {
		for (n = 0; n < 4; n++) {
			y[m][n] = m + (3 * n + 1);
			printf("%d ", y[m][n]);
		}
		printf("\n");
	}
	printf("\n");

	int z[3][4]={0,0,0,0,0,0,0,0,0,0,0,0};
	int a, b, c;
	for (a = 0; a < j; a++) {
		for (b = 0; b < n; b++) {
			for (c = 0; c < m; c++) {
				z[a][b] = z[a][b] + (x[a][c] * y[c][b]);
			}
			printf("%d ", z[a][b]);
		}
		printf("\n");
	}
}

#include <stdio.h>
void main() {
	//�ǽ� 5��
	int x[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			x[i][j] = 3 * i + j+1;
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//�ǽ� 6��
	int y[3][4];
	int m, n;
	for (m = 0; m < 3; m++) {
		for (n = 0; n < 4; n++) {
			y[m][n] = m + (3 * n +1);
			printf("%d ", y[m][n]);
		}
		printf("\n");
	}
}

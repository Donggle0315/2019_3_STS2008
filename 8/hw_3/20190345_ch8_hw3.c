#include <stdio.h>
int main() {
	int matrix1[3][3], matrix2[3][4], result[3][4], i, j, k, n;
	FILE* fp1; FILE* fp2;
	fp1=fopen("arrays.txt", "rt");
	fp2=fopen("MulMatrix.txt", "wt");
	if (fp1 == NULL) {
		printf("Error1\n");
		return 1;
	}
	if (fp2 == NULL) {
		printf("Error2\n");
		return 1;
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j <3; j++) {
			fscanf(fp1, "%d", &matrix1[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i <3; i++) {
		for (j = 0; j <4; j++) {
			fscanf(fp1, "%d", &matrix2[i][j]);
		}
	}
	for (i = 0; i <3; i++) {
		for (j = 0; j <4; j++) {
			result[i][j] = 0;
			for (k = 0; k <3; k++) {
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	j = 0;
	for (i = 0; i <3; i++) {
		fprintf(fp2, "%d %d %d %d\n", result[i][0], result[i][1], result[i][2], result[i][3]);
	}
	int state1, state2;
	state1=fclose(fp1);
	state2=fclose(fp2);
	if (state1 != 0) {
		printf("Error3\n");
		return 1;
	}
	if (state2 != 0) {
		printf("Eroor4\n");
		return 1;
	}
	
}
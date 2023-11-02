#include <stdio.h>
void main() {
	int i, j,k;
	for (i = 1; i < 6; i++) {
		for (k = 4; k > i-1; k = k - 1) {
			printf(" ");
		}
		for (j = 1; j < 2 * i; j = j + 1) {
			printf("*");
		}
		printf("\n");
	}
}
#include <stdio.h>
void main() {
	int i,j;
	for (i = 2; i < 10; i++) {
		if (i == 6) {
			continue;
		}
		for (j = 2; j < 10; j++) {
			if (j == 4) {
				continue;
			}
			printf("%d * %d = %2d ", j, i, j*i);
		}
		//6일때 continu 사용 추가
		printf("\n");
	}
}
#include <stdio.h>
void main() {
	int i, j, k;
	float m, n;
	i = 3; j = 2;
	k = 8 + (i / 4 + 1 / j) * 3;
	m = 8 + ((float)i / 4.0 + 1.0 / j) * 3;
	n = 8 + ((float)i / 4 + 1.0 / j) * 3;
	printf("k=%d, m=%f, n=%f\n", k, m, n);
	//m과 n을 float로 선언한 프로그램
}
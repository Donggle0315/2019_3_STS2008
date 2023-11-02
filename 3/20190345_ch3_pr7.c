#include <stdio.h>
#include <math.h>
void main() {
	int N;
	float data;
	float M2 = 0, E2 = 0;
	float std_dev;
	printf("데이터의 개수를 입력하시오: ");
	scanf("%d", &N);
	printf("데이터를 %d개 입력하시오: ", N);
	int i;
	for (i = 0; i < N; ++i) {
		float k;
		scanf(" %f", &k);
		M2 += k * k;
		E2 += k;
	}
	M2 = M2 / N;
	E2 = (E2 / N) * (E2 / N);
	std_dev = sqrt(M2 - E2);
	printf("표준편차 = %f", std_dev);
}
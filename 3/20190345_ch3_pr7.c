#include <stdio.h>
#include <math.h>
void main() {
	int N;
	float data;
	float M2 = 0, E2 = 0;
	float std_dev;
	printf("�������� ������ �Է��Ͻÿ�: ");
	scanf("%d", &N);
	printf("�����͸� %d�� �Է��Ͻÿ�: ", N);
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
	printf("ǥ������ = %f", std_dev);
}
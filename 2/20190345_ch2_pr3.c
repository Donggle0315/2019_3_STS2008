#include <stdio.h>
int main() {
	int i, j, k;
	i = 2, j = 1;
	k = 8 + (i / 4.0 + 1.0 / j) * 3;
	printf("%d", k);
// 형 변환은 5번 발생한다.
}
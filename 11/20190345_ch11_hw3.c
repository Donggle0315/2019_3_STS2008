#include <stdio.h>
void sort(int a[], int n);
void main() {
	int a[] = { 4,3,6,1,7,2,5 };
	printf("정렬 전 출력 : ");
	int k = sizeof(a) / sizeof(int);
	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	sort(a, k);

	printf("정렬 후 출력 : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}
}

void sort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				int p = a[j];
				a[j] = a[j + 1];
				a[j + 1] = p;
			}
		}
	}
}
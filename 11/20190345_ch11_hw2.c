#include <stdio.h>
void sort(int a[], int n);
void main() {
	int a[] = { 54,35,44,12,5 };
	printf("정렬 전 출력 : ");
	int k = sizeof(a) / sizeof(int);
	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	sort(a,k);

	printf("정렬 후 출력 : ");
	for (int i = 0; i < k; i++) {
		printf("%d ", a[i]);
	}
}

void sort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int p = a[i];
				a[i] = a[j];
				a[j] = p;
			}
		}
	}
}
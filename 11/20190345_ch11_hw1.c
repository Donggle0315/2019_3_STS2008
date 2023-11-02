#include <stdio.h>
void sort(int a[], int n);
void main() {
	int a[] = { 7,6,5,4,3,2,1 };
	int k = sizeof(a) / sizeof(int);
	printf("정렬 전 출력 : ");
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
	int i,j,p;
	for (i = 1; i < n; i++) {
		p = a[i];
		for (j = i - 1; (j >= 0 && a[j] > p); j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = p;
	}
}
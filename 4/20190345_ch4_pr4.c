#include <stdio.h>
void main() {
	int k,l,m;
	m = 0;
	int arr[10] = { 1,3,5,7,21,22,24,25,49,51 };
	printf("In array: ");
	for (l = 0; l < 10; l++) {
		printf("%d ", arr[l]);
	}
	printf("\n");
	printf("Input: ");
	scanf("%d", &k);
	for (l = 0; l < 10; l++) {
		if (arr[l]==k) {
			printf("Result: exists");
			m = 1;
			break;
		}
	}
	if (m == 0) {
		printf("Result: not exists");
	}
}
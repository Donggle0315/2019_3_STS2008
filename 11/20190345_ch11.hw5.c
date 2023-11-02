#include <stdio.h>
#define SIZE 30
void printArray(int x[]);
void linearSearch(int x[]);
void main() {
	int a[] = { 97,60,77,32,12,23,44,52,11,13,43,3,4,14,75,42,99,41,66,19,87,69,85,74,15,39,48,57,53,55 };
	printArray(a);
	linearSearch(a);
	
}

void printArray(int x[]) {
	printf(">> 정렬된 배열:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, x[i]);
	}
	printf("\n");
}

void linearSearch(int x[]) {
	int k = 0, p, q, i;
	while (k == 0) {
		printf(">> 찾을 숫자를 입력하세요: ");
		scanf("%d", &p);
		for (i = 0; i < SIZE - 1; i++) {
			if (p == x[i]) {
				q = i;
				k = 1;
				break;
			}
			else {
				q = -1;
			}
		}
		if (q == -1) {
			printf(">> 숫자가 없습니다.\n");
		}
		else {
			printf(">> 축하합니다. %d 인덱스에 숫자 %d을(를) 순차 탐색으로 찾았습니다.", q, x[q]);
		}
	}
}
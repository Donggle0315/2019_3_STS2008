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
	printf(">> ���ĵ� �迭:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, x[i]);
	}
	printf("\n");
}

void linearSearch(int x[]) {
	int k = 0, p, q, i;
	while (k == 0) {
		printf(">> ã�� ���ڸ� �Է��ϼ���: ");
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
			printf(">> ���ڰ� �����ϴ�.\n");
		}
		else {
			printf(">> �����մϴ�. %d �ε����� ���� %d��(��) ���� Ž������ ã�ҽ��ϴ�.", q, x[q]);
		}
	}
}
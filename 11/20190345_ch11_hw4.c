#include <stdio.h>
#define SIZE 30
void printArray(int x[]);
void main() {
	int a[] = { 97,60,77,32,12,23,44,52,11,13,43,3,4,14,75,42,99,41,66,19,87,69,85,74,15,39,48,57,53,55 };
	printf(">> �����ϱ��� ������ ��:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, a[i]);
	}
	printf("\n");
	printf("���� ������ �����ϰڽ��ϴ�.\n");
	printArray(a);
}

void printArray(int x[]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (x[j] > x[j + 1]) {
				int p = x[j];
				x[j] = x[j + 1];
				x[j + 1] = p;
			}
		}
	}
	printf(">> ���� ���� �� ������ ��:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, x[i]);
	}
}

#include <stdio.h>
#define SIZE 30
void printArray(int x[]);
int binSearch(int x[],int data, int first, int finish);
void main() {
	int a[] = { 97,60,77,32,12,23,44,52,11,13,43,3,4,14,75,42,99,41,66,19,87,69,85,74,15,39,48,57,53,55 };
	printArray(a);
	int k = -1; int data;
	while (k == -1) {
		printf("ã�� ���ڸ� �Է��ϼ���: ");
		scanf("%d", &data);
		k= binSearch(a, data, 0, SIZE);
		if (k == -1) {
			printf(">> ���ڰ� �����ϴ�.\n");
		}
		else {
			printf(">> �����մϴ�. %d �ε����� ���� %d��(��) ���� Ž������ ã�ҽ��ϴ�.",k,a[k]);
			break;
		}
	}
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
	printf(">> ���ĵ� �迭:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, x[i]);
	}
	printf("\n");
}

int binSearch(int x[],int data, int first, int finish) {
	int mid;
	mid = (first + finish) / 2;
	if (first > finish) {
		return -1;
	}
	else if (x[mid] < data) {
		return binSearch(x, data, mid + 1, finish);
	}
	else if (x[mid] > data) {
		return binSearch(x, data, first, mid - 1);
	}
	else if (x[mid] == data) {
		return mid;
	}
	else return -1;
}
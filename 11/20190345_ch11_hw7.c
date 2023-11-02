#include <stdio.h>
#define SIZE 30
void printArray(int x[]);
void linearSearch(int x[]);
void linearSearch(int x[]);
void bubbleArray(int x[]);
int binSearch(int x[], int daa, int first, int finish);
void main() {
	int a[SIZE];
	FILE* fp;
	fp=fopen("Input.txt", "rt");
	int k = 0,i;
	while (fscanf(fp, "%d", &i) != EOF) {
		a[k] = i;
		k++;
	}
	fclose(fp);
	printArray(a);
	linearSearch(a);
	printf("\n");
	printf("버블 정렬을 실행하겠습니다.\n");
	bubbleArray(a);
	printf("\n");
	int t = -1; int data;
	while (t == -1) {
		printf("찾을 숫자를 입력하세요: ");
		scanf("%d", &data);
		t = binSearch(a, data, 0, SIZE);
		if (t == -1) {
			printf(">> 숫자가 없습니다.\n");
		}
		else {
			printf(">> 축하합니다. %d 인덱스에 숫자 %d을(를) 이진 탐색으로 찾았습니다.", t, a[t]);
			break;
		}
	}
}

void printArray(int x[]) {
	printf(">> 정렬하기전 배열:");
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

void bubbleArray(int x[]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE - 1; j++) {
			if (x[j] > x[j + 1]) {
				int p = x[j];
				x[j] = x[j + 1];
				x[j + 1] = p;
			}
		}
	}
	printf(">> 버블 정렬 후 데이터 값:");
	for (int i = 0; i < SIZE; i++) {
		printf("[%2d] = %2d ", i, x[i]);
	}
}

int binSearch(int x[], int data, int first, int finish) {
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

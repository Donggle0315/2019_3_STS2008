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
	printf("���� ������ �����ϰڽ��ϴ�.\n");
	bubbleArray(a);
	printf("\n");
	int t = -1; int data;
	while (t == -1) {
		printf("ã�� ���ڸ� �Է��ϼ���: ");
		scanf("%d", &data);
		t = binSearch(a, data, 0, SIZE);
		if (t == -1) {
			printf(">> ���ڰ� �����ϴ�.\n");
		}
		else {
			printf(">> �����մϴ�. %d �ε����� ���� %d��(��) ���� Ž������ ã�ҽ��ϴ�.", t, a[t]);
			break;
		}
	}
}

void printArray(int x[]) {
	printf(">> �����ϱ��� �迭:");
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
	printf(">> ���� ���� �� ������ ��:");
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

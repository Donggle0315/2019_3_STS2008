#include <stdio.h>
#define STUNUM 15
#define ROW 7
void printOriginalArray(int x[][ROW],int y);
void average_grade(int x[][ROW]);
void sorted_by_average(int x[][ROW]);
void sorted_by_id(int x[][ROW]);
void printArray(int x[][ROW], int y);
void main() {
	int i, j, a[STUNUM][ROW];
	FILE* f;
	f = fopen("Input_stu.txt", "rt");
	for (i = 0; i < STUNUM; i++) {
		for (j = 0; j < ROW-2; j++) {
			fscanf(f, "%d", &a[i][j]);
		}
		a[i][5] = 0;
		a[i][6] = 0;
	}
	fclose(f);

	printf("id         eng  math phy  cs   avg   grade\n");
	printf("original data-----------------------------\n");
	printOriginalArray(a,5);
	average_grade(a);
	printf("sorted by average-------------------------\n");
	sorted_by_average(a);
	printArray(a, 7);
	printf("sorted by id------------------------------\n");
	sorted_by_id(a);
	printArray(a, 7);
}

void printOriginalArray(int x[][ROW], int y) {
	for (int i = 0; i < STUNUM; i++) {
		for (int j = 0; j < y; j++) {	
			printf("%d   ", x[i][j]);
		}
		printf("\n");
	}
}

void average_grade(int x[][ROW]) {
	int i, j;
	for (i = 0; i < STUNUM; i++) {
		x[i][5] = (x[i][1] + x[i][2] + x[i][3] + x[i][4]) / 4;
	}
	for (i = 0; i < STUNUM; i++) {
		int k = 1;
		for (j = 0; j < STUNUM; j++) {
			if (x[i][5] < x[j][5]) {
				k=k+1;
			}
		}
		if ((k*100)/15 <= 25) {
			x[i][6] = 'A';
		}
		else if ((k * 100) / 15 <= 50) {
			x[i][6] = 'B';
		}
		else if ((k * 100) / 15 <= 70) {
			x[i][6] = 'C';
		}
		else if ((k * 100) / 15 <= 90) {
			x[i][6] = 'D';
		}
		else {
			x[i][6] = 'F';
		}
	}
}




void sorted_by_average(int x[][ROW]) {
	int i, j,k;
	for (i = 0; i < STUNUM; i++) {
		for (j = 0; j < STUNUM - 1; j++) {
			if (*(*(x + j) + 5) < *(*(x + (j + 1)) + 5)) {
				long long p = 0;
				for (k = 0; k < ROW; k++) {
					p = *(*(x + j) + k);
					*(*(x + j) + k) = *(*(x + (j + 1)) + k);
					*(*(x + (j + 1)) + k) = p;
				}
			}
		}
	}
}

void sorted_by_id(int x[][ROW]) {
	int i, j, k;
	for (i = 0; i < STUNUM; i++) {
		for (j = 0; j < STUNUM - 1; j++) {
			if (*(*(x + j) + 0) > *(*(x + (j + 1)) + 0)) {
				long long p = 0;
				for (k = 0; k < ROW; k++) {
					p = *(*(x + j) + k);
					*(*(x + j) + k) = *(*(x + (j + 1)) + k);
					*(*(x + (j + 1)) + k) = p;
				}
			}
		}
	}
}

void printArray(int x[][ROW], int y) {
	for (int i = 0; i < STUNUM; i++) {
		for (int j = 0; j < y-1; j++) {
			printf("%d   ", x[i][j]);
		}
		printf("%c", x[i][6]);
		printf("\n");
	}
}
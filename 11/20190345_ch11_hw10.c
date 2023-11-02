#include <stdio.h>
#define STUNUM 3
#define ROW 7
void printArray(long long array[][ROW]);
void bubbleSortArray(long long array[][ROW], int index, int order);

void main() {
    long long student[STUNUM][ROW] = { 20121584,95,50,70,80,0,'A',
       20114585,54,66,80,98,0,'B',
       20138574,85,94,87,88,0,'C' };

    printArray(student);
    printf("\n");
    printf("index 0을 기준으로 오름차순으로 정렬---\n");
    bubbleSortArray(student, 0, 1);
    printArray(student);
    printf("\n");
    printf("index 1을 기준으로 내림차순으로 정렬---\n");
    bubbleSortArray(student, 1, -1);
    printArray(student);
}

void printArray(long long array[][ROW]) {  //7열까지 모두 출력
    for (int i = 0; i < STUNUM; i++) {
        for (int j = 0; j < ROW - 1; j++) {
            printf("%d   ", array[i][j]);
        }
        printf("%c", array[i][ROW - 1]);
        printf("\n");
    }
}

void bubbleSortArray(long long array[][ROW], int index, int order) {
    int i, j, k;
    if (order == 1) {
        for (i = 0; i < STUNUM; i++) {
            for (j = 0; j < STUNUM - 1; j++) {
                if (*(*(array + j) + index) > * (*(array + (j + 1)) + index)) {
                    long long p = 0;
                    for (k = 0; k < ROW; k++) {
                        p = *(*(array + j) + k);
                        *(*(array + j) + k) = *(*(array + (j + 1)) + k);
                        *(*(array + (j + 1)) + k) = p;
                    }
                }
            }
        }
    }
    else if (order == -1) {
        for (i = 0; i < STUNUM; i++) {
            for (j = 0; j < STUNUM - 1; j++) {
                if (*(*(array + j) + index) < *(*(array + (j + 1)) + index)) {
                    long long p = 0;
                    for (k = 0; k < ROW; k++) {
                        p = *(*(array + j) + k);
                        *(*(array + j) + k) = *(*(array + (j + 1)) + k);
                        *(*(array + (j + 1)) + k) = p;
                    }
                }
            }
        }
    }
}

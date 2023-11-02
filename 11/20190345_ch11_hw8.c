#include <stdio.h>
#define STUNUM 3
#define ROW 7
void printOriginalArray(long long array[][ROW]);
void printArray(long long array[][ROW]);

int main() {
    long long student[STUNUM][ROW] = { 20121584,95,50,70,80,0,'A',
       20114585,54,66,80,98,0,'B',
       20138574,85,94,87,88,0,'C' };

    printOriginalArray(student);
    printf("\n");
    printArray(student);

    return 0;
}

void printOriginalArray(long long array[][ROW]) {  //0~4열 출력

    for (int i = 0; i < STUNUM; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d   ", array[i][j]);
        }
        printf("\n");
    }
}

void printArray(long long array[][ROW]) {  //7열까지 모두 출력
    for (int i = 0; i < STUNUM; i++) {
        for (int j = 0; j < ROW - 1; j++) {
            printf("%d   ", array[i][j]);
        }
        printf("%c", array[i][ROW-1]);
        printf("\n");
    }
}
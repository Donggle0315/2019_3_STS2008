#include <stdio.h>
#define STUNUM 3
#define ROW 7
void printArray(long long array[][ROW]);
void swapArray(long long array1[], long long array2[]);

void main() {
    long long student[STUNUM][ROW] = { 20121584,95,50,70,80,0,'A',
       20114585,54,66,80,98,0,'B',
       20138574,85,94,87,88,0,'C' };

    printArray(student);
    printf("\n");
    swapArray(student[0], student[2]);
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

void swapArray(long long array1[], long long array2[]) {
    int t = 0;
    for (int i = 0; i < ROW; i++) {
        t = array1[i];
        array1[i] = array2[i];
        array2[i] = t;
    }
    
}
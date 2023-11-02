#include <stdio.h>
#include <memory.h>		
#include <stdlib.h>
#include <time.h>
#define IN_FILE_NAME "keylog_in_small.txt"
#define OUT_FILE_NAME "output.txt"
#define BUFFER_SIZE 10000
void decodeString(char a[], char b[]);
void deleteElement(char b[], int pos);
void insertElement(char b[], int pos, char c);
int main() {
	FILE* fpin = fopen(IN_FILE_NAME, "rt");
	FILE* fpout = fopen(OUT_FILE_NAME, "wt");
	if (fpin == NULL || fpout == NULL) {
		printf("Input Error\n");
		return 1;
	}
	char* a;
	a = (char*)malloc(10000 * sizeof(char));
	char* b;
	b = (char*)malloc(10000 * sizeof(char));
	
	char* pstr;
	time_t start, end;
	double result;
	int i, j;
	int sum = 0;
	start = time(NULL);
	while (!feof(fpin)) {
		pstr = fgets(a, BUFFER_SIZE, fpin);
		decodeString(a, b);
		printf("%s", b);
		fprintf(fpout, "%s", b);
	}
	free(a);
	free(b);

	end = time(NULL);
	result = (double)(end - start);
	printf("\n");
	printf("시간 측정 시간 : %f", result);
	int state1, state2;
	state1 = fclose(fpin);
	state2 = fclose(fpout);
	if (state1 != 0 || state2 != 0) {
		printf("output error\n");
		return 1;
	}
}

void decodeString(char a[], char b[]) {
	memset(b, 0, BUFFER_SIZE);
	int pos = 0;
	int i;
	for (i = 0; i < 10000; i++) {
		if (a[i] == EOF) {
			break;
		}
		if (a[i] == '<' && pos > 0) {
			pos--;
		}
		else if (a[i] == '>' && pos < strlen(b)) {
			pos++;
		}
		else if (a[i] == '-' && pos != 0) {
			pos--;
			deleteElement(b, pos);
		}
		else if (a[i] == '\n' || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] <= 'z' && a[i] >= 'a') || (a[i] >= '0' && a[i] <= '9')) {
			insertElement(b, pos, a[i]);
			pos++;
		}
	}
}
void deleteElement(char b[], int pos) {
	int i;
	for (i = pos; i < strlen(b) - 1; i++) {
		b[i] = b[i + 1];
	}
	b[i] = 0;
}

void insertElement(char b[], int pos, char c) {
	int i;
	for (i = strlen(b) - 1; i >= pos; i--) {
		b[i + 1] = b[i];
	}
	b[pos] = c;
}
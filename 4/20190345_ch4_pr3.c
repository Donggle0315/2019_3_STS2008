#include <stdio.h>
void main() {
	char arr[50];
	int i,k;
	printf("Input:");
	for (i = 0; i < 50; i++) {
		scanf("%c", & arr[i]);
		if (arr[i] == '\n') {
			break;
		}
	}
	printf("Result :");
	for (k=i-1; k>-1; k--) {
		printf("%c", arr[k]);
	}
}
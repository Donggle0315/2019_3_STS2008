#include <stdio.h>
void main() {
	int i,k;
	int arr[3] = { 0,1,2 };
	for (i = 0; i < 3; i++) {
		printf("number? ");
		scanf("%d", &k);
		arr[i] = arr[i] + k;
	}
	printf("arr[0] = %d, arr[1] = %d, arr[2] = %d", arr[0], arr[1], arr[2]);
}
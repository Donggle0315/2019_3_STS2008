#include <stdio.h>
void main() {
	int a = 1; int t = 0;
	for (a = 1; a <= 10; a++) {
		t = t + a;
	}
	printf("sum = %d", t);
	
}
#include <stdio.h>
int fibo(int x);
void main() {
	int a;
	printf("Number : ");
	scanf("%d", &a);
	printf("%dth fibonacci number : %d",a,fibo(a));
}
int fibo(int x) {
	int i;
	int f0 = 0;
	int f1 = 1;
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else {
		for (i = 0; i < x; i++) {
			return fibo(x - 1) + fibo(x - 2);
		}
	}
}
#include <stdio.h>
void main() {
	int a, b,c,d;
	printf("변수 num1을 입력하세요. : ");
	scanf("%d", &a);
	printf("변수 num2를 입력하세요. : ");
	scanf("%d", &b);
	if (a > b) {
		c = a; a = b; b = c;
	}
	while (a != 0) {
		d = b % a;
		b = a; a = d;
	}
	printf("최대공약수는 %d이다.", b);
}
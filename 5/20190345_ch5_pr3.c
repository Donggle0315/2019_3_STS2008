#include <stdio.h>
int gcd(int x, int y);
void main() {
	int a, b, c;
	printf("변수 num1 입력 : ");
	scanf("%d", &a);
	printf("변수 num2 입력 : ");
	scanf("%d", &b);
	if (b > a) {
		c = a; a = b; b = c;
	}
	
	printf("두 수 %d와 %d의 최대 공약수는 %d입니다.",a,b, gcd(a,b));
}
int gcd(int x,int y) {
	int i = 2;
	int gcd=1;
	while (i <= y) {
		if ((x % i == 0) & (y % i == 0)) {
			gcd = i;
		}
		i++;
	}
	return gcd;
}
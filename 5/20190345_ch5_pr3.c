#include <stdio.h>
int gcd(int x, int y);
void main() {
	int a, b, c;
	printf("���� num1 �Է� : ");
	scanf("%d", &a);
	printf("���� num2 �Է� : ");
	scanf("%d", &b);
	if (b > a) {
		c = a; a = b; b = c;
	}
	
	printf("�� �� %d�� %d�� �ִ� ������� %d�Դϴ�.",a,b, gcd(a,b));
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
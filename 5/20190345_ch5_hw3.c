#include <stdio.h>
void main() {
	int a, b,c,d;
	printf("���� num1�� �Է��ϼ���. : ");
	scanf("%d", &a);
	printf("���� num2�� �Է��ϼ���. : ");
	scanf("%d", &b);
	if (a > b) {
		c = a; a = b; b = c;
	}
	while (a != 0) {
		d = b % a;
		b = a; a = d;
	}
	printf("�ִ������� %d�̴�.", b);
}
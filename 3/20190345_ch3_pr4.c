#include <stdio.h>
void main() {
	float a, b, c;
	char d;
	int i;
	for (i = 0; i < 5; i++)	{
		printf("��Ģ ������� �Է��ϼ���[��)2 * 2] : ");
		scanf("%f %c %f", &a, &d, &b);
		switch (d)
		{
		case '+': c = a + b; printf("%.2f %c %.2f = %.2f\n", a, d, b, c);
			break;
		case '-': c = a - b; printf("%.2f %c %.2f = %.2f\n", a, d, b, c);
			break;
		case '*': c = a * b; printf("%.2f %c %.2f = %.2f\n", a, d, b, c);
			break;
		case '/': c = a / b; printf("%.2f %c %.2f = %.2f\n", a, d, b, c);
			break;
		default: printf("�ùٸ� ������� �Է��ϼ���\n");
		}
	}
}
#include <stdio.h>
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
float Div(int x, int y);
void main() {
	int a, b;
	printf("First num : ");
	scanf("%d", &a);
	printf("Second num : ");
	scanf("%d", &b);
	printf("Add : %d\n", Add(a, b));
	printf("Sub : %d\n", Sub(a, b));
	printf("Mul : %d\n", Mul(a, b));
	printf("Div : %f\n", Div(a, b));
}
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
float Div(int x, int y) {
	float k = (double)x / (double)y;
	return k;
}
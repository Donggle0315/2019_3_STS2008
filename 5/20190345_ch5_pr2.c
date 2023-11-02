#include <stdio.h>
float usd(int a);
float eur(int a);
int jpy(int a);
void main() {
	int k;
	printf("input KRW : ");
	scanf("%d", &k);
	printf("USD : %.2f\n", usd(k));
	printf("EUR : %.2f\n", eur(k));
	printf("JPY : %d", jpy(k));
}
float usd(int a) {
	return a / 1195.50;
}
float eur(int a) {
	return a / 1245.89;
}
int jpy(int a) {
	return a / 10.1949;
}
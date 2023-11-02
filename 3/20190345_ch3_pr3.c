#include <stdio.h>
void main() {
	int a, b, c, d;
	printf("Enter te nunber 1 : ");
	scanf("%d", &a);
	printf("Enter te nunber 2 : ");
	scanf("%d", &b);
	printf("Enter te nunber 3 : ");
	scanf("%d", &c);
	int max, min;
	if (c > b)
		d=b, b = c, c = d;
	if (a < b)
		d=a, a = b, b = d;
	if (b < c)
		d = b, b = c, c = d;
	printf("The max number is %d\n", a);
	printf("The min number is %d", c);
}
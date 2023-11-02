#include <stdio.h>
#include <math.h>
void main() {
	float bound = 1.0e-8;
	float a, b, c, D, root1, root2;
	printf("Enter a, b, c :");
	scanf("%f %f %f", &a, &b, &c);
	D = (b * b) - (4 * a * c);
	if (abs(D) <= bound) {
		printf("root = %f", (-b) / (2 * a));
	}
	else if (D > 0) {
		D = sqrt(D);
		root1 = (-b + D) / (2 * a);
		root2 = (-b - D) / (2 * a);
		printf("root1 = %f and root2 = %f", root1, root2);
	}
	else {
		printf("No root exists.");
	}
}
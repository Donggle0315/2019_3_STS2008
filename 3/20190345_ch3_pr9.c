#include <stdio.h>
#include <math.h>
void main() {
	float a, b, c, D, root1, root2;
	printf("Enter a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	D = (b * b) - (4 * a * c);
	if (D > 0) {
		D = sqrt(D);
		root1 = (b + D) / (2 * a);
		root2 = (b - D) / (2 * a);
		printf("root1 = %.4f and root2 = %.4f.\n", root1, root2);
	}
	else if (D == 0) {
		printf("root = %.4f.", ((-b) / 2*a));
	}
	else {
		printf("No root exists.");
	}
}
#include <stdio.h>
void main() {
	int a;
	printf("Enter the score(0-100):");
	scanf("%d", &a);
	if (a > 90)
		printf("The grade is A");
	else if (a > 80)
		printf("The grade is B");
	else if (a > 70)
		printf("The grade is C");
	else if (a > 60)
		printf("The grade is D");
	else
		printf("The grade is F");

}
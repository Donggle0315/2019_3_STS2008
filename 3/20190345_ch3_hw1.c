#include <stdio.h>
void main() {
	char Type; int H; int M; int a; int p;
	printf("Type : ");
	scanf("%c", &Type);
	printf("Hour : ");
	scanf("%d", &H);
	printf("Minute : ");
	scanf("%d", &M);
	a = (H * 60 + M) / 10;
	if (a <= 1)
		p = 0;
	else if (Type == 'C'| Type=='c')
		p = a * 2;
	else if (Type == 'B'|Type=='b')
		p = a * 3;
	else if (Type=='T'|Type=='t')
		p = a * 5;
	printf("Parking Charge : %d$", p);

}
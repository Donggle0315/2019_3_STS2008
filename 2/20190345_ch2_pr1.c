#include <stdio.h>
void main() {
	int a = 1;
	int b = 1;
	int c = 0;
	printf("1 AND 1 = %d\n", a&&b);
	printf("1 AND 0 = %d\n", a && c);
	printf("1  OR 1 = %d\n", a || b);
	printf("1  OR 0 = %d\n", a || c);
	printf("  NOT 1 = %d\n", !a&&c);
	printf("  NOT 0 = %d", !c&&b);
}
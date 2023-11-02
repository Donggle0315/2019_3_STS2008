#include <stdio.h>
void main() {
	char c = 0;
	int count = 0;
	while (c != EOF) {
		c = getchar();
		putchar(c);
	}
	printf("bye\n");
} 
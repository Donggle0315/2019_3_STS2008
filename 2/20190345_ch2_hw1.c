#include <stdio.h>
void main() {
	float a = 3.14;
	float b;
	printf("원의 반지름을 입력하세요.\n");
	printf("반지름 : ");
	scanf("%f", &b);
	printf("원의 넓이는 %.2f입니다.", a*b*b);
}
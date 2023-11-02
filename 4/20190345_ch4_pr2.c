#include <stdio.h>
void main() {
	int k;
	int arr[3];
	printf("시간을 입력하시오 : ");
	scanf("%d", &arr[0]);
	printf("분을 입력하시오 : ");
	scanf("%d", &arr[1]);
	printf("초를 입력하시오 : ");
	scanf("%d", &arr[2]);
	k = arr[0] * 3600 + arr[1] * 60 + arr[2];
	printf("%d시간 %d분 %d초는 %d초 입니다.", arr[0], arr[1], arr[2], k);
}
#include <stdio.h>
void main() {
	int k;
	int arr[3];
	printf("�ð��� �Է��Ͻÿ� : ");
	scanf("%d", &arr[0]);
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &arr[1]);
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &arr[2]);
	k = arr[0] * 3600 + arr[1] * 60 + arr[2];
	printf("%d�ð� %d�� %d�ʴ� %d�� �Դϴ�.", arr[0], arr[1], arr[2], k);
}
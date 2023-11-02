#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	int i;
	srand(time(NULL));
	for (i = 0; i < 5; i++) {
		printf("%d\n", rand());
	}
}
//msdn 문서에서의 srand 함수의 설명
//srand 함수는 현재의 thread에서의 무작위 랜덤 추출된 일련의 정수를 만들어내기 위한 시작시점을 설정한다.
//같은 순서의 결과를 생성하는 generator를 재초기화 하기 위해, srand 함수를 불러내고 같은 시드 argument를 다시 사용한다.
//어느 다른 시드값은 generator가 무작위 랜덤 추출 순서에서 다른 시작점을 설정하게 한다.
//rand는 형성된 랜덤 추출된 숫자를 불러온다.
//어떠한 srand를 불러오기 전에 rand를 불러오는 것은 같은 순서를 만들어낸다.
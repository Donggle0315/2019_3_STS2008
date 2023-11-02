#include <stdio.h>
void main() {
	char ID[8];
	char name[10];
	int i;
	fputs("학번 6자리를 입력하세요: ", stdout);
	fgets(ID, sizeof(ID), stdin);

	for (i = 0; i < sizeof(ID); i++)
		if (ID[i] == '\0') {
			break;
		}
	if (i == 7) {
		while (getchar() != '\n');
	}
	else if (i<7) {
		for (int j = 0; j < 7; j++) {
			if (ID[j] == '\n') {
				ID[j] = '\0';
			}
		}
	}
	

	//더 많이 들어올 경우에 대비하여 버퍼를 비운다.
	//덜 들어올 경우를 대비하여 ID에서 '\n'을 '\0'으로 바꿔야 한다.
	fputs("이름을 입력 하세요: ", stdout);
	fgets(name, sizeof(name), stdin);
	for (i = 0; i < sizeof(name); i++)
		if (name[i] == '\0') {
			break;
		}
	if (i == 9) {
		while (getchar() != '\n');
	}
	else if (i < 9) {
		for (int j = 0; j < 9; j++) {
			if (name[j] == '\n') {
				name[j] = '\0';
			}
		}
	}
	
	//많이 들어올 경우를 대비하여 버퍼를 비운다.
	//덜 들어올 경우를 대비하여 name에서 '\n'을 '\0'으로 바꿔야 한다.
	printf("학번: %s\n", ID);
	printf("이름: %s\n", name);
}
#include <stdio.h>
void main() {
	char ID[8];
	char name[10];
	fputs("�й� 6�ڸ��� �Է��ϼ���: ", stdout);
	fgets(ID, sizeof(ID), stdin);
	if (ID[8] != '\0') {
		while (getchar() != '\n');
	}
	else if (sizeof(ID) <= 8) {
		for (int i = 0; i < sizeof(ID); i++) {
			if (ID[i] == '\n') {
				ID[i] = '\0';
			}
		}
	}
	fputs("�̸��� �Է� �ϼ���: ", stdout);
	fgets(name, sizeof(name), stdin);
	if (name[10] != '\0') {
		while (getchar() != '\n');
	}
	else if (sizeof(name) <= 10) {
		for (int i = 0; i < sizeof(name); i++) {
			if (name[i] == '\n') {
				name[i] = '\0';
			}
		}
	}
	printf("�й�: %s\n", ID);
	printf("�̸�: %s\n", name);
}
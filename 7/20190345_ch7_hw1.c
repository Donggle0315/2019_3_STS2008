#include <stdio.h>
void main() {
	char ID[8];
	char name[10];
	int i;
	fputs("�й� 6�ڸ��� �Է��ϼ���: ", stdout);
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
	

	//�� ���� ���� ��쿡 ����Ͽ� ���۸� ����.
	//�� ���� ��츦 ����Ͽ� ID���� '\n'�� '\0'���� �ٲ�� �Ѵ�.
	fputs("�̸��� �Է� �ϼ���: ", stdout);
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
	
	//���� ���� ��츦 ����Ͽ� ���۸� ����.
	//�� ���� ��츦 ����Ͽ� name���� '\n'�� '\0'���� �ٲ�� �Ѵ�.
	printf("�й�: %s\n", ID);
	printf("�̸�: %s\n", name);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	char mail[20];
	int mobile;
}PROFESSOR;

typedef struct {
	char name[20];
	char major[20];
	int id;
	float cgpa;
}STUDENT;

typedef struct {
	char type;
	union {
		PROFESSOR prof;
		STUDENT stu;
	}u;
}PERSON;

void printfPerson(PERSON*);


int main(void) {
	int i;
	PERSON data[2];
	data[0].type = 'a';
	strcpy(data[0].u.prof.name, "james");
	strcpy(data[0].u.prof.mail, "james@hanmail.net");
	data[0].u.prof.mobile = 6055726;

	data[1].type = 'b';
	strcpy(data[1].u.stu.name, "david");
	strcpy(data[1].u.stu.major, "cs");
	data[1].u.stu.id = 20010123;
	data[1].u.stu.cgpa = 0.55;

	printfPerson(&(data[0]));
	printfPerson(&(data[1]));
}

void printfPerson(PERSON *k) {
	if (k->type == 'a') {
		printf("------------------------------\n");
		printf("name: %s\n", k->u.prof.name);
		printf("mail: %s\n", k->u.prof.mail);
		printf("mobile: %d\n", k->u.prof.mobile);
	}
	else if (k->type=='b') {
		printf("------------------------------\n");
		printf("name: %s\n", k->u.stu.name);
		printf("mail: %s\n", k->u.stu.major);
		printf("id: %d\n", k->u.stu.id);
		printf("cgpa: %.6f\n",k->u.stu.cgpa);
	}
}
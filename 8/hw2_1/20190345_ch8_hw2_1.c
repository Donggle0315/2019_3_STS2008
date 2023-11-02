#include <stdio.h>
int main() {
	char letter;
	int upper_case=0, lower_case=0, arabic=0, blank=0;
	FILE*file_1 = fopen("input.txt", "rt");
	if (file_1 == NULL) {
		printf("Error1\n");
		return 1;
	}
	FILE *file_2 = fopen("output.txt", "wt");
	if (file_2 == NULL) {
		printf("Error2\n");
		return 1;
	}
	
	while (!feof(file_1)) {
		fscanf(file_1, "%c", &letter);
		if (letter >= 'A' && letter <= 'Z') {
			upper_case++;
		}
		else if (letter >= 'a' && letter <= 'z') {
			lower_case++;
		}
		else if (letter >= '0' && letter <= '9') {
			arabic++;
		}
		else if (letter ==' ') {
			blank++;
		}
		
	}
	fprintf(file_2,"Number of upper case letters : %d\n",upper_case);
	fprintf(file_2, "Number of lower case letters : %d\n", lower_case);
	fprintf(file_2, "Number of arabic characters : %d\n", arabic);
	fprintf(file_2, "Number of blanks : %d\n", blank);

	

	int state_1, state_2;
	state_1 = fclose(file_1);
	state_2 = fclose(file_2);
	if (state_1 != 0) {
		printf("Error2\n");
		return 1;
	}
	if (state_2 != 0) {
		printf("Error3\n");
		return 1;
	}
}
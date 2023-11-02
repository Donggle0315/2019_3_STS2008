#include <stdio.h>
int main() {
    char k;
    int upper_case = 0, lower_case = 0, arabic = 0, blank = 0;
    FILE* file_1 = fopen("input.txt", "rt");
    if (file_1 == NULL) {
        printf("Error1\n");
        return 1;
    }
    FILE* file_2 = fopen("output.txt", "wt");
    if (file_2 == NULL) {
        printf("Error2\n");
        return 1;
    }

    while (!feof(file_1)) {

        k = fgetc(file_1);

        if (k >= 'A' && k <= 'Z') {
            upper_case++;
        }
        if (k >= 'a' && k <= 'z') {
            lower_case++;
        }
        if (k >= '0' && k <= '9') {
            arabic++;
        }
        if (k == ' ') {
            blank++;
        }
    }

    char buffer[100];
    int i;

    fputs("Number of upper case letters : ", file_2);
    sprintf(buffer, "%d", upper_case);
    fputs(buffer, file_2);
    fputc('\n', file_2);
    
    fputs("Number of lower case letters : ", file_2);
    sprintf(buffer, "%d", lower_case);
    fputs(buffer, file_2);
    fputc('\n', file_2);

    fputs("Number of arabic characters : ", file_2);
    sprintf(buffer, "%d", arabic);
    fputs(buffer, file_2);
    fputc('\n', file_2);
    
    fputs("Number of blanks : ", file_2);
    sprintf(buffer, "%d", blank);
    fputs(buffer, file_2);
    fputc('\n', file_2);
    

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
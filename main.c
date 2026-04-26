//Write your code in this file

#include <stdio.h>
#include <ctype.h>

#define STUDENTS 5
#define TESTS 13

int main(){
    char name[STUDENTS][11];
    int score[STUDENTS][TESTS];

    float average[STUDENTS];
    float total = 0;

    for (int i = 0; i < STUDENTS; i++){
        scanf("%s", name[i]);

        for (int j =0; j < TESTS; j++){
            scanf("%d" , &score[i][j]);
        }
    }

    for (int i = 0; i < STUDENTS; i++) {
        int summa = 0;

        for (int j = 0; j< TESTS; j++) {
            summa += score[i][j];
        }

        average[i] = summa / (float)TESTS;
        total += average[i];
    }

    float group_average = total / STUDENTS;

    int best = 0;
    for (int i = 1; i < STUDENTS; i++) {
        if (average[i] > average[best]) {
            best = i;
        }
    }

    for (int i = 0; i < STUDENTS; i++) {
        name[i][0] = toupper(name[i][0]);
    }

    printf("%s\n", name[best]);

    for (int i = 0; i < STUDENTS; i++) {
        if (average[i] < group_average) {
            printf("%s\n", name[i]);
        }
    }

    return 0;
}
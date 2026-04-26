//Write your code in this file

#include <stdio.h>

#define STUDENTS 5
#define TESTS 13

int main(){
    char name[STUDENTS][11];
    int score[STUDENTS][TESTS];

    for (int i = 0; i< TESTS; i++){
        scanf("%s", name[i]);

        for (int j =0; j < TESTS; j++){
            scanf("%d" , &score[i][j]);
        }
    }

    return 0;
}
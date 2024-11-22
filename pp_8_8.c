#include <stdio.h>

#define MATRIX_SZ 5

int main(void){
    int student_arr[MATRIX_SZ][MATRIX_SZ] = {0};
    int sum = 0;
    int high_score;
    int low_score;

    for(int i = 0; i < MATRIX_SZ; i++){
        printf("Enter quiz grades of student %d: ", i+1);
        for(int j = 0; j < MATRIX_SZ; j++){
            scanf("%d", &student_arr[i][j]);
        } 
    }

    //student average and total
    printf("\nStudent  Total  Average\n");
    for(int i = 0; i < MATRIX_SZ; i++){
        printf("%4d     ", i+1);
        for(int j = 0; j < MATRIX_SZ; j++){
            sum += student_arr[i][j];
        }
        printf("%3d   %3d\n", sum, sum/MATRIX_SZ);
        sum = 0;
    }

    //quiz average and total

    printf("\nQuiz  Total  Average  High  Low\n");
    for(int i = 0; i < MATRIX_SZ; i++){
        printf("%4d   ", i+1);
        sum = 0;
        high_score = 0;
        low_score = 100;
        for(int j = 0; j < MATRIX_SZ; j++){
            sum += student_arr[j][i];
            if(student_arr[j][i] > high_score) high_score = student_arr[j][i];
            if(student_arr[j][i] < low_score) low_score = student_arr[j][i];
        }
        printf("%3d    %3d    %3d    %3d\n", sum, sum/MATRIX_SZ, high_score, low_score);
    }

    return 0;
}
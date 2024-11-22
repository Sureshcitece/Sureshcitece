#include <stdio.h>

#define MATRIX_SZ 5

int main(void){
    int array[MATRIX_SZ][MATRIX_SZ] = {0};
    int sum = 0;

    for(int i = 0; i < MATRIX_SZ; i++){
        printf("Enter row %d: ", i+1);
        for(int j = 0; j < MATRIX_SZ; j++){
            scanf("%d", &array[i][j]);
        } 
    }

    printf("Row totals: ");

    for(int i = 0; i < MATRIX_SZ; i++){
        for(int j = 0; j < MATRIX_SZ; j++){
            sum += array[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\nColumn Totals: ");

    for(int i = 0; i < MATRIX_SZ; i++){
        for(int j = 0; j < MATRIX_SZ; j++){
            sum += array[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");

    return 0;
}
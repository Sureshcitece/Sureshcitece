/*this program creates a magic square of specified size*/

#include <stdio.h>

int main(void){

    int size;
    int curr_row = 0;
    int curr_col = 0;
    int square;
    int prev_row, prev_col;
    printf("Enter odd number between 1 and 99 for magic square:");
    scanf("%d", &size);

    curr_col = size / 2;
    square = size * size;

    int a[size][size];

    //initializer 

    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            a[i][j] = 0;

    //start filling elements

    a[curr_row][curr_col] = 1;

    for(int i = 2; i <= square; i++){
        if((curr_row - 1) < 0) curr_row = size - 1;
        else --curr_row;
        if((curr_col + 1) >= size) curr_col = 0;
        else ++curr_col;
        if(a[curr_row][curr_col] != 0){
                curr_col = prev_col;
                curr_row = prev_row + 1;
        }
        a[curr_row][curr_col] = i;
        prev_row = curr_row;
        prev_col = curr_col;
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
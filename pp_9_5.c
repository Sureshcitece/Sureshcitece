/*Program to create magic square of specified size - modified*/

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]){
 //initialize magic square to 0
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    //start filling elements
    int curr_row = 0;
    int curr_col = n / 2;
    int square = n * n;
    int prev_row, prev_col;
    magic_square[curr_row][curr_col] = 1;

    for(int i = 2; i <= square; i++){
        if((curr_row - 1) < 0) curr_row = n - 1;
        else --curr_row;
        if((curr_col + 1) >= n) curr_col = 0;
        else ++curr_col;
        if(magic_square[curr_row][curr_col] != 0){
                curr_col = prev_col;
                curr_row = prev_row + 1;
        }
        magic_square[curr_row][curr_col] = i;
        prev_row = curr_row;
        prev_col = curr_col;
    }
}

void print_magic_square(int n, char magic_square[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%4d", magic_square[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter odd number between 1 and 99 for creating magic square:");
    scanf("%d", &n);
    char magic_square[n][n];
    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);
    return 0;
}
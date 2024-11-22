#include <stdio.h>
#define MAX n*n

int main(void){
    int n = 0, row = 0, col = 0;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an off number between 1 and 99.\n");
    printf("Enter size of magic square:");

    scanf("%d", &n);

    int magic_square[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            magic_square[i][j] = 0;
    
    row = 0;
    col = n / 2;

    for(int i = 1; i <= MAX; i++){
        magic_square[row][col] = i;
        int next_row = (row - 1 + n) % n;
        int next_col = (col + 2) % n;

        if(magic_square[next_row][next_col] > 0)
            row = (row + 1) % n;
        else {row = next_row; col = next_col;}
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%12d", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
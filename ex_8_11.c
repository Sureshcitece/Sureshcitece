#include <stdio.h>

#define N 8

int main(void){
    int checker_board[N][N];

    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if((i+j)%2) checker_board[i][j] = 'R';
            else checker_board[i][j] = 'B';
            printf("%5c", checker_board[i][j]);
        }
        printf("\n");
    }

}
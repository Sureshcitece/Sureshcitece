//program to walk in random path from a to z in 10x10 array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_MAX 10

int main(void){

    char array[ARR_MAX][ARR_MAX] = {'.'};
    int next_move;
    int curr_row = 0, curr_column = 0;
    char curr_char = 65;

    //initialize array with dots

    for(int i = 0; i < ARR_MAX; i++)
        for(int j = 0; j < ARR_MAX; j++)
            array[i][j] = '.';

    //make the starting point

    srand((unsigned) time(NULL));
    curr_column = rand() % ARR_MAX;

    array[curr_row][curr_column] = curr_char;;

    //performing next move, 0 up, 1 down, 2 left, 3 right

    while(curr_char < 90){

        next_move = rand() % 4;
        
        //check if next move is out of bounds or already populated

        if (next_move == 0 && (curr_row-1 < 0 || array[curr_row-1][curr_column] != '.')) continue;
        if (next_move == 1 && (curr_row+1 > 9 || array[curr_row+1][curr_column] != '.')) continue;
        if (next_move == 2 && (curr_column-1 < 0 || array[curr_row][curr_column-1] != '.')) continue;
        if (next_move == 3 && (curr_column+1 > 9 || array[curr_row][curr_column+1] != '.')) continue;

        //valid move

        switch (next_move)
        {
        case 0:
            array[--curr_row][curr_column] =  ++curr_char;
            break;
        case 1:
            array[++curr_row][curr_column] = ++curr_char;
            break;
        case 2:
            array[curr_row][--curr_column] = ++curr_char;
            break;
        case 3:
            array[curr_row][++curr_column] = ++curr_char;
            break;
        default:
            break;
        }
        if(array[curr_row-1][curr_column] != '.' && array[curr_row+1][curr_column] != '.' && array[curr_row][curr_column-1] != '.' && array[curr_row][curr_column+1] != '.') break;
    }

    for(int i = 0; i < ARR_MAX; i++){
        for(int j = 0; j < ARR_MAX; j++){
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
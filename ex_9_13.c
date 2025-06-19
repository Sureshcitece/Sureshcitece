#include <stdio.h>

int evaluate_position(char board[8][8]){
    int whites = 0;
    int blacks =0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            switch (board[i][j])
            {
            case 'Q':
                whites += 9;
                break;
            case 'R':
                whites += 5;
                break;
            case 'B':
                whites += 3;
                break;
            case 'N':
                whites += 3;
                break;
            case 'P':
                ++whites;
                break;
            case 'q':
                blacks += 9;
                break;
            case 'r':
                blacks += 5;
                break;
            case 'b':
                blacks += 3;
                break;
            case 'n':
                blacks += 3;
                break;
            case 'p':
                ++blacks;
                break;
            default:
                break;
            }
        }
    }
    return (whites - blacks);
}

int main(){
    char board[8][8] = {
        {'r', 0, 0, 'q', 'k', 'b', 'n', 'r'},
        {0, 'p', 'p', 0, 0, 'p', 'p', 'p'},
        {'p', 0, 'p', 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 'p', 0, 0, 0},
        {0, 0, 0, 0, 'P', 0, 0, 0},
        {0, 0, 0, 0, 0, 'N', 0, 0},
        {'P', 'P', 'P', 'P', 0, 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 0, 0, 'R'}
    };
    int n = evaluate_position(board);
    if (n > 0)
        printf("Person who is at advantage is white");
    else if (n < 0)
        printf("Person who is at advantage is black");
    else printf("Both black and white have equal advantage");

}
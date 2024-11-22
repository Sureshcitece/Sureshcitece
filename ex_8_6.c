//program to initialize 7 segment display arrays for digits

#include <stdio.h>

#define days 30
#define hours 24

int main(void){
    int segments[10][7] = { 
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1},
        {1, 1, 0, 1, 0, 1, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}
    };

    return 0;

}
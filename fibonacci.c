#include <stdio.h>

#define SIZE 40

int main(void){
    int fib_numbers[SIZE] = {0, 1};
    for(int i = 2; i < SIZE; i++){
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }

    for(int i = 0; i < SIZE; i++)
        printf("%d\n", fib_numbers[i]);

    return 0;
}
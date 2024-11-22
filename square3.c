#include <stdio.h>

int main(void){

    int n, odd, square, i;

    printf("Program prints square table\n");
    printf("Enter a number:");
    scanf("%d", &n);

    odd = 3;
    i = 1;

    for(square = 1; i <= n; odd+=2){
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}
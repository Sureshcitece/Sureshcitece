#include <stdio.h>

int main(){
    int x;
    int exp;
    printf("Program to evaluate 3x5 + 2x4 - 5x3 - x2 + 7x - 6\nEnter a value for x:");
    scanf("%d", &x);

    exp = ((((3 * x + 2) * x - 5) * x - 1) * x  + 7) * x - 6;

    printf("value of expression is: %d", exp);

    return 0;
}
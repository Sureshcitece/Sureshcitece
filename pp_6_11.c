// program to calculate value of infinite series

#include <stdio.h>

int main(void){

    float sum = 1.0f, fact = 1.0f; int m;

    printf("Enter a number:");
    scanf("%d", &m);

    for(int i = 1; i <= m ; i++){
        fact *= i;
        sum += 1/fact;
    }

    printf("sum is: %.4f", sum);

    return 0;
}
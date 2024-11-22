// program to calculate value of infinite series

#include <stdio.h>

int main(void){

    float sum = 1.0f, fact = 1.0f, m; long int i;

    printf("Enter smallest floating number:");
    scanf("%f", &m);

    for(i = 1; (1.0f/fact) > m ; i++){
        fact *= i;
        sum += 1.0f/fact;
    }

    printf("sum is: %.4f after %ld times", sum, i);

    return 0;
}
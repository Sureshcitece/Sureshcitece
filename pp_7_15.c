//program to calculate factorial with different data types

//short max == 6
//int max == 12
//long max == 12
//long max == 20
//float max == 34
//double max == 170
//long double == 1754

#include <stdio.h>

int main(void){
    
    long double x, fact = 1.0;

    printf("Enter a positive integer:");
    scanf("%Lf", &x);

    for(int i = 1; i <= x; i++)
        fact *= i;

    printf("Factorial of %Lf: %Lf", x, fact); 
    
    return 0;
}
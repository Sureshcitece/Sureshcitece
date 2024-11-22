#include <stdio.h>

int main(){

    float amt, taxed;

    printf("Program to calculate 5% tax.\nEnter an amount:");

    scanf("%f", &amt);

    taxed = 0.05f * amt + amt;

    printf("with tax added: Rs. %f", taxed);

    return 0;
}
//program to calculate square root of positive integer using Newton's method

#include <stdio.h>
#include <math.h>

int main(void){

    double y = 1.0, y_old = 1.0, x;

    printf("Enter a positive number:");
    scanf("%lf", &x);

    for(;;){
        y = (y + (x/y)) / 2;
        if(fabs(y - y_old) < (0.00001 * y)) break;
        y_old = y;
    }
    printf("Square root: %f", y);
    
    return 0;
}
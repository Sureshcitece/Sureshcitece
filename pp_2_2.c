#include <stdio.h>

int main(){
    int r;

    printf("Program to calculate volume of sphere.\n");
    printf("Enter radius of sphere:");
    scanf("%d", &r);

    float vol = (4.0f/3.0f) * 3.14159f * r * r * r;
    printf("volume of sphere with 10m radius is %f", vol);

    return 0;
}
//program to say wind type using speed

#include <stdio.h>

int main(void){
    
    int speed;

    printf("Enter wind speed (knots):");

    scanf("%d", &speed);

    if (speed > 63) printf("Hurricane");
    else if (speed >= 48) printf("Storm");
    else if (speed >= 28) printf("Gale");
    else if (speed >= 4) printf("Breeze");
    else if (speed >= 1) printf("Light Air");
    else printf("Calm");

    return 0;
}
/*program to find largets of entered numbers*/

#include <stdio.h>

int main(void){
    float n = 0.00f, largest = 0.00f;

    printf("Prgram to find largest of entered numbers. Enter 0 to end.\n");

    for(;;){
        printf("Enter a number:");
        scanf("%f", &n);
        if(n <= 0) break;
        if(n > largest)
            largest = n;
    }

    printf("the largetst number entered was %.4f", largest);

    return 0;
}
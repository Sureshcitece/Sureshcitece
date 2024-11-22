#include <stdio.h>

int main(void){
    float n, largest = 0.0f;
    for(; ;){
        printf("Enter a number:");
        scanf("%f", &n);
        if(n == 0) break;
        if(n > largest) largest = n; 
    }

    printf("largest number is %f\n", largest);

    return 0;
}
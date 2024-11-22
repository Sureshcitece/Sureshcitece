#include <stdio.h>

int main(void){

    int repeat_array[10] = {0};
    long n;
    int digit;

    printf("Enter a number:");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        ++repeat_array[digit];
        n /= 10;
    }

    printf("Digit:\t\t");
    for(int i = 0; i < 10; i++) printf("%2d", i);
    printf("\n");

    printf("Occurences:\t");
    for(int i = 0; i < 10; i++) printf("%2d", repeat_array[i]);

    return 0;
}
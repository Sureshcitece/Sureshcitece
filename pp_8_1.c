#include <stdio.h>
#include <stdbool.h>

int main(void){
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number:");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            ++digit_seen[digit];
            n /= 10;
            continue;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s):");

    for(int i = 0; i <= 9; i++)
        if(digit_seen[i] > 1) printf("%2d", i);

    return 0;
}
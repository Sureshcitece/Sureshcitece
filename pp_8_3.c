#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;

    for(;;){
        printf("Enter a number (enter 0 to quit):");
        scanf("%ld", &n);

        if(n <= 0) break;

        while (n > 0){
            digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0) printf("Repeated digit\n");
        else printf("no repeated digit\n");
    }
    return 0;
}
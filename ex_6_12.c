#include <stdio.h>

int main(void){
    int d, n, counter = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for(d = 2; d * d < n; d++){
        ++counter;
        if(n % d == 0) break;
    }
    
    if(d * d < n) printf("%d is divisible by %d\n", n, d);
    else printf("%d is prime\n", n);

    printf("looped by %d number of times\n", counter);
}
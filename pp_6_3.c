/* program to reduce fraction*/

#include <stdio.h>

int main(void){

    int n, m, r, x, y, gcd;

    printf("Enter a fraction:");
    scanf("%d/%d", &n, &m);

    x = n; y = m;

    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }

    gcd = m;

    printf("In lowest terms: %d/%d", x/gcd, y/gcd);

    return 0;
}
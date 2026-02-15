#include <stdio.h>
//program to calculate recursive gcd

#include <stdio.h>

int gcd(int m, int n){
    if (n == 0)
        return m;
    else
        return gcd(n, m%n);
}


int main(){
    printf("gcd: %d", gcd(4,6));
    return 0;
}
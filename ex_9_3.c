#include <stdio.h>

int gcd(int m, int n){
    int r;
    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main(){
    printf("%d", gcd(5,6));
    return 0;
}
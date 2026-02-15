#include <stdio.h>

void pb(int n){
    if (n != 0){
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

int main(){
    char x;
    scanf("%d", &x);
    //pb(x);
    putchar('0' + 5);
}
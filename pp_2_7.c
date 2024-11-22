#include <stdio.h>

int main(){

    int amt, twenty, ten, five, one, n;
    printf("Enter a amount in rupee:");
    scanf("%d", &amt);

    n = 20;

    for(int i = 0; i < 4; i++){
        if(i == 3) {
            printf("1 Rs notes: %d\n", amt);
            break;
        }
        printf("%d Rs notes: %d\n", n, amt/n);
        amt %= n;
        n /= 2;
    }

    return 0;
}
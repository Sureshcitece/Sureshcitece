#include <stdio.h>

int fact(int n){
    int f = 1;
    while(n >= 1){
        f *= n--;
    }
    return f;
}

int main(){
    int n;
    printf("Enter number to calculate factorial:");
    scanf("%d", &n);
    printf("%d", fact(n));

    return 0;
}
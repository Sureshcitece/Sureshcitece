#include <stdio.h>

int main(){
    int n, d;
    int oct = 0;

    printf("Enter a number between 0 and 32767:");
    scanf("%d", &n);

    printf("The number in octal is: %d%d%d%d%d", (n/4092)%8, (n/512)%8, (n/64)%8, (n/8)%8, n%8);

    return 0;
}
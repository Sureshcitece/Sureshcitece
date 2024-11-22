/*program to reverse digit*/

#include <stdio.h>

int main(void){
    int n;
    printf("Eneter a number to reverse digits");
    scanf("%d", &n);

    do{
        printf("%d", n%10);
        n /= 10;
    }while (n > 0);

    return 0;
}
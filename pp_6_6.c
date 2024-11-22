/*program to print squares of even numbers till entered digit*/

#include <stdio.h>

int main(void){

    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    for(int i = 2; i * i <= n; i += 2)
        printf("%d\n", i * i);

    return 0;
}
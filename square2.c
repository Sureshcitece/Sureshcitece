#include <stdio.h>

int main(void){
    int n;
    char ch;
    printf("A program that prints a table of squares:\n");
    printf("Enter the number of squares to be printed:");
    scanf("%d", &n);
    ch = getchar();
    for(int i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);
        if(i % 24 == 0){
            printf("Press enter to continue....");
            ch = getchar();
        }
    }
    return 0;
}
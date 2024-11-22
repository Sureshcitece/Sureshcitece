#include <stdio.h>

int main(void){
    long i, n;
    printf("This program prints table of squares.");
    printf("Enter number of entries in table:");
    scanf("%ld", &n);
    while(getchar() != '\n')
    ;
    for(i = 1; i <= n; i++){
        printf("%10ld%10ld\n", i, i * i);
        if(i % 24 == 0){
            printf("Press Enter to Continue...");
                while(getchar() != '\n')
                ;
        }
    }
    
    return 0;
}
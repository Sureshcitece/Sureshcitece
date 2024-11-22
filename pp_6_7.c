/*rearrange square 3.c to iterate with i*/

#include <stdio.h>

int main(void){

    int i, n, odd, square;

    printf("this program prints a table of squares.\n");
    printf("Enter number of entries in table:");

    scanf("%d", &n);

    for(i = 1, square = 1, odd = 3; i <= n; ++i, odd += 2){
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}
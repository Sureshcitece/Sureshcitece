#include <stdio.h>

int main(void){
    int i,j,k;

    i = 5; j = 3;

    printf("%d %d\n", i / j, i % j);

    i = 2;

    printf("%d\n", (i + 10) % 3);

    i = 7; j = 8; k = 9;

    printf("%d\n", (i + 10) % k / j);

    i = 1; j = 2; k = 3;
    
    printf("%d\n", (i + 5) % (j+2) / k);

    i = 2; j = 1;

    printf("%d %d\n", (-i) / j, -(i / j));

    printf("%d %d %d %d\n", 8 % 5, -8 % 5, 8 % -5, -8 % -5);

    i = 6;
    j = i += i;

    printf("%d %d\n", i, j);

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);

    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);

    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);

    i = 1;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);

    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);

    return 0;
}
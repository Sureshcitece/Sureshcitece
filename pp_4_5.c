#include <stdio.h>

int main(void){
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, total;

    printf("Enter 11 digit UPC:");

    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

    total = 3 * (d + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4);

    printf("Check digit is: %d", 9 - ((total - 1) % 10));

    return 0;
}
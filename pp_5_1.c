#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    if(n > 0 && n < 9) printf("The number %d has %d digit\n", n, 1);
    else if(n > 9 && n < 99) printf("The number %d has %d digits\n", n, 2);
    else if(n > 99 && n < 999) printf("The number %d has %d digits\n", n, 3);
    else if(n > 999 && n < 9999) printf("The number %d has %d digits\n", n, 4);
    else printf("Invalid number\n");

    return 0;
}
#include <stdio.h>

int main(void){
    int y, m, d;
    printf("Enter a date (dd/mm/yyyy):");
    scanf("%2d/%2d/%4d", &d, &m, &y);
    printf("You entered date: %d%.2d%.2d", y, m, d);

    return 0;
}
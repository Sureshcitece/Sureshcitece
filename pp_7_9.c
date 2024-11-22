//program to convert 12 hour time to 24 hour time

#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int hh, mm;

    printf("Enter a 12-hour time:");
    scanf("%d:%d %c", &hh, &mm, &ch);

    hh = (toupper(ch) == 'P') ? hh+12 : hh;
    hh = (toupper(ch) == 'A' && hh == 12) ? 0 : hh;

    printf("Equivalent 24-hour time: %.2d:%.2d", hh, mm);
}

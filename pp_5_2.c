//Prgram to convert 24 hour time into 12 hour time


#include <stdio.h>

int main(void){

    int hh, mm;
    
    printf("Enter a 24-hour time (hh:mm):");
    scanf("%d:%d", &hh, &mm);

    if(hh > 0 && hh < 12)
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hh, mm);
    else if(hh > 12 && hh <= 24)
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hh%12, mm);
    else if(hh == 0)
        printf("Equivalent 12-hour time: %.2d:%.2d AM", 12, mm);
    else if(hh == 12)
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hh, mm);
    else
        printf("Invalid time entered.");

    return 0;
}
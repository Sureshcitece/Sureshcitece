#include <stdio.h>

int main(void){
    int hh, mm;

    printf("Enter a 24-hour time:");
    scanf("%d : %d", &hh, &mm);

    if(hh >= 0 && hh < 12)
        printf("Equivalent 12-hour time: %.2d : %.2d AM\n", hh, mm);
    else if(hh > 12 && hh < 24)
        printf("Equivalent 12-hour time: %.2d : %.2d PM\n", hh%12, mm);
    else if(hh == 12)
        printf("Equivalent 12-hour time: %.2d : %.2d PM\n", hh, mm);
    else printf("Invalid time\n");
    
    return 0;
}
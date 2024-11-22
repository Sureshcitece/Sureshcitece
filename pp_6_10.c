//find earlier date out of entered dates

#include <stdio.h>

int main(void){

    int y1, m1, d1, e_y, e_d, e_m;

    printf("Enter a date (dd/mm/yy):");
    scanf("%d/%d/%d", &e_d, &e_m, &e_y);

    for(;;){
        printf("Enter a date (dd/mm/yy):");
        scanf("%d/%d/%d", &d1, &m1, &y1);
        if(d1 == 0 && m1 == 0 && y1 ==0) break;
        if(e_y > y1 || (e_y == y1 && e_m > m1) || (e_m == m1 && e_d > d1)){
            e_y = y1; e_m = m1; e_d = d1;
        }   
    }

    printf("%.2d/%.2d/%.2d is the earliest date", e_d, e_m, e_y);

    return 0;
}
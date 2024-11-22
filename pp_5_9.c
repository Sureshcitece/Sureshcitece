//find earlier dates between 2

#include <stdio.h>

int main(void){

    int y1, y2, d1, d2, m1, m2, earlier_date;

    printf("Enter first date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Enter second date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    if(y1 < y2)
        earlier_date = 1;
    
    if (y1 == y2 && m1 < m2)
        earlier_date = 1;
    
    if (y1 == y2 && m1 == m2 && d1 < d2)
        earlier_date = 1;

    if(earlier_date == 1)
        printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);


    return 0;
}
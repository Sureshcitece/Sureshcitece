//program to find closest flight when i enter time

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hh, mm, t_since_midnight; char ch;

    int d1 = 1305, d2 = 1140, d3 = 945, d4 = 840, d5 = 767, d6 = 679, d7 = 583, d8 = 480; 


    printf("Enter a 12 hour time:");
    scanf("%d:%d %c", &hh, &mm, &ch);

    if(toupper(ch) == 'P' && hh != 12)
        hh += 12;

    if(toupper(ch) == 'A' && hh == 12)
        hh = 0;


    t_since_midnight = hh * 60 + mm;

    if (t_since_midnight > d1)
        printf("Closest departure time is 09:45 PM., arriving at 11:58 PM");
    else if(t_since_midnight >= (d1 + d2) / 2)
        printf("Closest departure time is 09:45 PM., arriving at 11:58 PM");
    else if(t_since_midnight >= (d2 + d3) / 2)
        printf("Closest departure time is 07:00 PM., arriving at 09:20 PM");
    else if(t_since_midnight >= (d3 + d4) / 2)
        printf("Closest departure time is 03:45 PM., arriving at 05:55 PM");
    else if(t_since_midnight >= (d4 + d5) / 2)
        printf("Closest departure time is 02:00 PM., arriving at 04:08 PM");
    else if(t_since_midnight >= (d5 + d6) / 2)
        printf("Closest departure time is 12:47 PM., arriving at 03:00 PM");
    else if(t_since_midnight >= (d6 + d7) / 2)
        printf("Closest departure time is 11:19 AM., arriving at 01:31 PM");
    else if(t_since_midnight >= (d7 + d8) / 2)
        printf("Closest departure time is 09:43 AM., arriving at 11:52 AM");
    else
        printf("Closest departure time is 08:00 AM., arriving at 10:16 AM");

    return 0;
}
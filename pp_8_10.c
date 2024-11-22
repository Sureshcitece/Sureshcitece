//program to find closest flight when i enter time, this time using array

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int hh, mm, t_since_midnight;
    int min_diff = __INT_MAX__;
    int closest = 0;
    int dep_times[8] = {1305, 1140, 945, 840, 767, 679, 583, 480};
    int arr_times[8] = {1438, 1280, 1075, 968, 900, 811, 712, 616};

    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hh, &mm);

    t_since_midnight = hh * 60 + mm;

    for(int i = 0; i < 8; i++){
        int diff = abs(dep_times[i] - t_since_midnight);
        if (diff < min_diff){
            min_diff = diff;
            closest = i;
        } 
    }
    printf("Closest departure time is %.2d:%.2d., arriving at %.2d:%.2d", dep_times[closest]/60, dep_times[closest]%60, arr_times[closest]/60, arr_times[closest]%60);

/*     if (t_since_midnight > d1)
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
        printf("Closest departure time is 08:00 AM., arriving at 10:16 AM"); */

    return 0;
}
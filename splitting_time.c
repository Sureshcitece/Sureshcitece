#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec){
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = (total_sec % 3600) % 60;
}

int main(void){
    long total_sec;
    int hr, min, sec;
    printf("Enter total seconds passed today:");
    scanf("%ld", &total_sec);
    split_time(total_sec, &hr, &min, &sec);
    printf("%.2d:%.2d:%.2d\n", hr, min, sec);
    return 0;
}
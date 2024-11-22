#include <stdio.h>

#define days 30
#define hours 24

int main(void){

    int temperature_readings[days][hours] = {5};
    int sum = 0, count = 0;
    float average;

    for(int i = 0; i < days; i++){
        for(int j = 0; j < hours; j++){
            printf("%5d", temperature_readings[i][j]);
            sum += temperature_readings[i][j];
            count++;
        }
        printf("\n");
    }

    average = (float) sum /count;
    printf("Average: %f", average);

    return 0;
}
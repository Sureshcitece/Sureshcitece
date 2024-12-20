/*****************************************************************************
 * Name: dweight.c							                                 *
 * Purpose: Calculate dimensional weight of box from input provided by user. *
 * Author: Suresh Govindan				                                     *
 *****************************************************************************/

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void){
    int height, width, length, volume, weight;

    printf("Enter height of box:");
    scanf("%d", &height);
    printf("Enter width of box:");
    scanf("%d", &width);
    printf("Enter length of box:");
    scanf("%d", &length);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
#include <stdio.h>

double median(double x, double y, double z){
    double temp = 0;
    if (x > y)  { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp;}
    return y;   
}

int main(){
    printf("Median: %.2f", median(3.1, 1.1, 2.0));
}
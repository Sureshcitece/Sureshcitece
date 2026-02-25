/* Function to calculate polynomial 3x⁵+2x⁴-5x³-x²+7x-6*/

#include <stdio.h>

int calculate_power(int x, int n){
    if (n==0) return 1;
    return x * calculate_power(x, n-1);
}

int polynomial(int x){
 return (3 * calculate_power(x, 5)) + (2 * calculate_power(x, 4)) - (5 * calculate_power(x, 3)) - calculate_power(x, 2) + (7 * x) - 6;
}

int main(){
    int x;
    printf("Enter value of x to claculate polynomial 3x⁵+2x⁴-5x³-x²+7x-6:");
    scanf("%d", &x);
    printf("Result: %d", polynomial(x));
    return 0;
}
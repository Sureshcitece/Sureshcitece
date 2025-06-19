#include <stdio.h>

/*program to calculate inner product of array*/

double inner_product(double a[], double b[], int n){
    double product = 0;
    for(int i = 0; i < n; i++){
        product += a[i] * b[i];
    }
    return product;
}

int main(){
    double a[] = {1, 2, 3, 4, 5};
    double b[] = {6, 7, 8, 9, 0};
    printf("inner product of a and b: %f", inner_product(a, b, sizeof(a)/sizeof(a[0])));
}
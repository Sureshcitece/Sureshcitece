#include <stdio.h>

int f(int a, int b){
    return a+b;
}

int main(){
    int i; double x;
    i = f(83,12);
    printf("%d\n", i);
    x = f(83,12);
    printf("%d\n", i);
    i = f(8.32, 5.65);
    x = f(8.32, 5.65);
}

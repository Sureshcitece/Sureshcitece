#include <stdio.h>

void f(const int *p){
    int j = 10;
    p = &j;
}

int main(void){
    int *pp = NULL, qq = 20;
    pp = &qq;
    printf("%d\t", *pp);
    printf("%p\n", (void *)pp);
    f(pp);
    printf("%d\t", *pp);
    printf("%p\n", (void *)pp);
    return 0;
}
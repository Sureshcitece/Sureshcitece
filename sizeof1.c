#include <stdio.h>

int main(void){
    printf("int: %ld\n", sizeof(int));
    printf("short: %ld\n", sizeof(short));
    printf("long: %ld\n", sizeof(long));
    printf("float: %ld\n", sizeof(float));
    printf("double: %ld\n", sizeof(double));
    printf("long double: %ld\n", sizeof(long double));

    printf("%d\n", 't'-'a');
    printf("%d\n", 'T'-'A');

    printf("%d\n", '1'-'0');
    printf("%d\n", '5'-'0');
    printf("%d\n", '2'-'0');

    return 0;
}
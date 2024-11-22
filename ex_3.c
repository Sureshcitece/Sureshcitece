#include <stdio.h>


int main(){
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n", .0000009979);

/*     float x = 1.12345;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f", x); */

    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d\t%f\t%d", i, x, j);

    return 0;
}
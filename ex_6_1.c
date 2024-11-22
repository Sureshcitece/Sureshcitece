#include <stdio.h>

int main(){


    /** 6.1 **/

/*     int i = 1;
    while(i <= 128){
        printf("%d ", i);
        i *= 2;
    } */

    /*6.2*/

/* int i = 9384;
do {
    printf("%d ", i);
    i /= 10;
}while (i > 0); */

    /*6.3*/

/* int i, j;
for(i = 5, j = i - 1; i > 0, j > 0; --i, j = i -1)
    printf("%d ", i); */

    /*6.4*/
/* int i;
for (i = 0; i++ < 10;){
    printf("%d ", i);
} */

    /*6.5*/
/* int i = 0;
do{
    printf("%d ", i);
    i++;
}while(i < 10); */

    /*6.6*/
/* for(int i =1; i <= 128; i *= 2)
    printf("%d ", i); */

    /*6.7*/
/* for (int i = 9384; i > 0; i /= 10)
    printf("%d ", i); */

    /*6.8*/
/* for(int i = 10; i >= 1; i /= 2)
    printf("%d ", i++); */

    /*6.9*/
/*     int i = 10;
    while(i >= 1){
        printf("%d ", i++);
        i /= 2;
    } */

/*6.11*/
/* int sum = 0, i;
for(i = 0; i < 10; i++){
    if(i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum); */

/*6.12*/
/* int n, d;
printf("Enter a number to check prime:");
scanf("%d", &n);
for(d = 2; d * d < n; d++){
    if(n % d == 0)
        break;
}
if(d * d < n)
    printf("%d is divisible by %d\n", n, d);
else
    printf("%d is prime.\n", n); */

    /*6.13*/
    int m = 10, n;
    for(n = 0; m > 0; n++, m/=2)
    ;

    return 0;
}
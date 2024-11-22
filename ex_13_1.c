#include <stdio.h>

int main(void){
    char *p =  "abc";
    //putchar(p);
    putchar(*p);
    puts(p);
    //puts(*p);
    int i, j;
    char* s;
    scanf("%d%s%d", &i,s,&j);
    printf("%d\t%s\t%d\n", i, s, j);
    return 0;
}
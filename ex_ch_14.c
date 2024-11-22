#include <stdio.h>
#include <string.h>

#define DOUBLE(x) (2*(x))
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? 'c' - 'a' + 'A' : (c))
#define DISP(f, x) printf(#f "= ")
#define LINE_FILE (Line __LINE__ of file __FILE__)

int main(){
    printf("%d\n", DOUBLE(1+2));
    printf("%d\n", 4/DOUBLE(2));
    
    char s[20]; 
    int i;

    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("\n");

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("\n");

    const char *st = LINE_FILE;

    return 0;
}
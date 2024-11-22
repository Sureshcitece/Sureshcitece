#include <stdio.h>
#include <string.h>

int read_line(char str[], int n){
    char ch;
    int i = 0; 
    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        return i;
}

void censor(char a[]){
    for(int i = 0; a[i] != '\0'; i++)
        if(a[i] == 'f' && a[i+1] == 'o' && a[i+2] == 'o')
            a[i] = a[i+1] = a[i+2] = 'x';
    return;
}

int main(void){
    char a[100];
    read_line(a, 100);
    censor(a);
    printf("%s\n", a);
    return 0;
}
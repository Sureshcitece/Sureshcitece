//program to print first name and last name with initials

#include <stdio.h>

int main(void){
    char initial, ch;
    printf("Enter a first name and last name:");
    scanf(" %c", &initial);
    while(getchar() != ' ')
        ;
    scanf(" %c", &ch);
    putchar(ch);
    while( (ch = getchar()) != '\n'){
        if(ch != ' ')
            putchar(ch);
    }
        
    printf(", %c.", initial);

    return 0;
}
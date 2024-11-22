
//program to convert phone number words to numbers

#include <stdio.h>

int main(void){

    char ch;

    printf("Enter phone number:");
    while((ch = getchar()) != '\n'){
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        if(ch >= 'A' && ch <= 'Z'){
            switch (ch)
            {
            case 65: case 66: case 67:
                printf("%d", 2);
                break;
            case 68: case 69: case 70:
                printf("%d", 3);
                break;
            case 71: case 72: case 73:
                printf("%d", 4);
                break;
            case 74: case 75: case 76:
                printf("%d", 5);
                break;
            case 77: case 78: case 79:
                printf("%d", 6);
                break;
            case 80: case 81: case 82:
                printf("%d", 7);
                break;
            case 83: case 84: case 85:
                printf("%d", 8);
                break;
            case 86: case 87: case 88:
                printf("%d", 9);
                break;            
            default:
                break;
            }
        }
        else printf("%c", ch);
    }
    printf("\n");
    return 0;
}
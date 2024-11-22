#include <stdio.h>
#include <ctype.h>

int main(void){
    char c;
    printf("Program that converts phone number in alphanumarical to numbers:\n");
    printf("Enter phone number: ");
    while(c != '\n'){
        c = toupper(getchar());
        switch (c)
        {
        case 'A': case 'B': case 'C':
            printf("%d", 2);
            break;
        case 'D': case 'E': case 'F':
            printf("%d", 3);
            break;
        case 'G': case 'H': case 'I':
            printf("%d", 4);
            break;
        case 'J': case 'K': case 'L':
            printf("%d", 5);
            break;
        case 'M': case 'N': case 'O':
            printf("%d", 6);
            break;
        case 'P': case 'Q': case 'R': case 'S':
            printf("%d", 7);
            break;
        case 'T': case 'U': case 'V':
            printf("%d", 8);
            break;
        case 'W': case 'X': case 'Y':
            printf("%d", 9);
            break;
        case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '0':
        case '-':
            printf("%c", c);
            break;
        default:
            break;
        }
    }
    printf("\n");
    return 0;
}
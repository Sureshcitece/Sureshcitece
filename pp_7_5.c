#include <stdio.h>
#include <ctype.h>

int main(void){

    char ch; int sum = 0;
    
    printf("Program to find scrabble value.\nEnter a word:");

    while ((ch = getchar()) != '\n'){
        ch = toupper(ch);
        if(ch >= 'A' && ch <= 'Z'){
            switch (ch)
            {
            case 65: case 69: case 73: case 76: case 78: case 79: case 82: case 83: case 84: case 85:
                sum += 1;
                break;
            case 68: case 71:
                sum += 1;
                break;
            case 66: case 67: case 77: case 80:
                sum += 3;
                break;
            case 70: case 72: case 86: case 87: case 89:
                sum += 4;
                break;
            case 75:
                sum += 5;
                break;
            case 74: case 88:
                sum += 8;
                break;
            case 81: case 90:
                sum += 10;
                break;
            default:
                break;
            }
        }
    }

    printf("Scrabble value: %d\n", sum);

    return 0;
}
//program to create BIFF filter, an internet slang

#include <stdio.h>
#include <ctype.h>

#define N 100
#define NUM_EXCLAIM 10
#define MESSAGE_SIZE (sizeof(message) / sizeof(message[0]))

int main(void){
    int i = 0; char ch, message[N] = {' '};
    printf("Enter message:");

    while((ch = getchar()) != '\n'){
        message[i] = ch;
        i++;
        if(i >= N) break;
    }

    for(i = 0; i < MESSAGE_SIZE; i++){
        message[i] = toupper(message[i]);
        switch (message[i])
        {
        case 'A':
            message[i] = '4';
            break;
        case 'B':
            message[i] = '8';
            break;
        case 'E':
            message[i] = '3';
            break;
        case 'I':
            message[i] = '1';
            break;
        case 'O':
            message[i] = '0';
            break;
        case 'S':
            message[i] = '5';
            break;      
        default:
            break;
        }
        putchar(message[i]);
    }
    for (i = 0; i < NUM_EXCLAIM; i++)
        putchar('!');

    printf("\n");

    return 0;
}
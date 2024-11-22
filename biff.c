/****************************************************
*  Program to convert characters sing B1FF filter   * 
*    A->4 B->8 E->3 I->1 O->0 S->5                  *
*****************************************************/

#include <stdio.h>
#include <ctype.h>
#define MAXCHAR 1024

int main(void){
    
    char orig_msg[MAXCHAR] = {""};
    int non_null_c = 0;

    printf("Enter message (max 1024):");

    for(int i = 0; i < MAXCHAR; i++){
        scanf("%c", &orig_msg[i]);
        if(orig_msg[i] == '\n') break;
        orig_msg[i] = toupper(orig_msg[i]);
        switch (orig_msg[i]){
            case 'A':
                orig_msg[i] =  '4';
                break;
            case 'B':
                orig_msg[i] =  '8';
                break;
            case 'E':
                orig_msg[i] =  '3';
                break;
            case 'I':
                orig_msg[i] =  '1';
                break;
            case 'O':
                orig_msg[i] =  '0';
                break;
            case 'S':
                orig_msg[i] =  '5';
                break;
            default:
                break;
        }
        ++non_null_c; 
    }

    for(int i = non_null_c; i < non_null_c + 10; i++)
        orig_msg[i] = '!';

    for(int i = 0; i < MAXCHAR; i++){
        if(orig_msg[i] != 0 ) printf("%c", orig_msg[i]);
    }

    printf("\n");
    return 0;
}
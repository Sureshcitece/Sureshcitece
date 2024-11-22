//programming project 7_5 modified using array

#include <stdio.h>
#include <ctype.h>

int main(void){
    char scrabble_array[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char ch;
    int scrabble_value = 0;

    printf("Program to find scrabble value.\nEnter a word:");

    while((ch = getchar()) != '\n'){
        ch = toupper(ch);
        if(ch >= 'A' && ch <= 'Z'){
            for(int i = 0; i < sizeof(scrabble_array)/scrabble_array[0]; i++){
                if(ch == i+65) scrabble_value += scrabble_array[i];
            }
        }
    }
    printf("scrabble value is: %d", scrabble_value);
}
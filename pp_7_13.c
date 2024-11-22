//program to count average length of work in a sentence

#include <stdio.h>

int main(void){
    char ch; int word_count = 1, char_count = 0;

    printf("Enter a sentence:");

    while((ch = getchar()) != '\n'){
        if(ch == ' ') ++word_count;
        else char_count++;
    }

    printf("Average word length: %.1f", (float) char_count/word_count); 
    
    return 0;
}
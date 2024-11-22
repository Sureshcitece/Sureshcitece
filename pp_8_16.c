/*program to check 2 words are anagram or not*/

#include <stdio.h>
#include <ctype.h>

#define ALPHA 26

int main(void){
    char ch;
    int anagram;

    for(;;){
        anagram = 0;
        char word_arr[ALPHA] = {0};
        printf("Enter first word:");
        while((ch = getchar()) != '\n')
            if(isalpha(ch)) word_arr[tolower(ch) - 'a'] += 1;
        printf("Enter second word:");
        while((ch = getchar()) != '\n')
            if(isalpha(ch)) word_arr[tolower(ch) - 'a'] -= 1;
        for(int i = 0; i < (sizeof(word_arr)/sizeof(word_arr[0])); i++){
            if(word_arr[i] != 0) {anagram = 1; break; }
        }
        if(anagram == 0) printf("The words are anagrams.\n");
        else printf("The words are not anagrams.\n");
    }

    return 0;
}
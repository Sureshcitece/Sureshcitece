#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHA 26

void read_word(int counts[26]){
    char ch;
    while((ch = getchar()) != '\n')
    {
        if(isalpha(ch)) counts[tolower(ch) - 'a'] += 1;
    }
    return;
}

bool equal_array(int counts1[26], int counts2[26]){
    for(int i = 0; i < 26; i++)
        if(counts1[i] != counts2[i]) return false;
    return true;
}

 int main(){
    int counts1[26] = {0};
    int counts2[26] = {0};
    printf("Enter first word:");
    read_word(counts1);
    printf("Enter second word:");
    read_word(counts2);
    if(equal_array(counts1, counts2)) 
        printf("The words are anagram.");
    else
        printf("The words are not an anagram.");
    return 0;
}
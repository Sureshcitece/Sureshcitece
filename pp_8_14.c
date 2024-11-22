//program to reverse a sentence
#include <stdio.h>

int main(void){

    char sentence[50] = {0};
    char ch, terminator;
    int end = 0;

    //reading sentence array and terminator character 

    printf("Enter a sentence:");
    for (int i = 0; (ch = getchar()) != '\n'; i++){
        if(ch == '.' || ch == '?' || ch =='!'){
            terminator = ch;
            break;
        }
        sentence[i] = ch;
        end = i;
    }

    //search array word by word from last
    for(int i = end; i > 0; i--){
        if(sentence[i] == ' '){
            for(int j = i+1; j <= end; j++)
                printf("%c", sentence[j]);
            printf(" ");
            end = i - 1;
        }
    }

    //print first word
    for(int i = 0; i <= end; i++)
        printf("%c", sentence[i]);

    //print terminating character
    printf("%c\n", terminator);

    return 0;
}
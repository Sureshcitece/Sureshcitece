//modified pp7_11

#include <stdio.h>

int main(void){
    char last_name[20] = {0};
    char ch, initial;

    printf("Enter first name and last name:");
    scanf("%c", &initial);

    while( getchar() != ' ')
    ;

    int i = 0;
    while( (ch = getchar()) != '\n'){
        last_name[i] = ch;
        i++;
    }

    printf("You entered the name:");
    for(int j = 0; j < sizeof(last_name)/sizeof(last_name[0]); j++)
        printf("%c", last_name[j]);

    printf(", %c.\n", initial);

    return 0;
}
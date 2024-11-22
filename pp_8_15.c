//program to encryt with caesar method

#include <stdio.h>

#define MSG_MAX 80

int main(void){

    char message[MSG_MAX] = {0};
    char ch;
    int j = 0, shift = 0;
    char encrypted_message[MSG_MAX] = {0};

    printf("Enter message to be encrypted:");
    while((ch = getchar()) != '\n' && j < MSG_MAX){
        message[j] = ch;
        j++;
    }

    printf("Enter shift amount (1-25):");
    scanf("%d", &shift);

    //encrypting message

    for(int i = 0; i < MSG_MAX; i++){
        if(message[i] >= 'A' && message[i] <= 'Z')
            encrypted_message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
        else if (message[i] >= 'a' && message[i] <= 'z')
            encrypted_message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
        else encrypted_message[i] = message[i];
    }

    //printing encrypted message
    printf("Encrypted message:");
    for(int i = 0; i < MSG_MAX; i++)
        printf("%c", encrypted_message[i]);

    return 0;
}
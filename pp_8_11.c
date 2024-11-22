
//program to convert phone number words to numbers

#include <stdio.h>

#define PH_MAX 15

int main(void){

    char ch;
    int i = 0;
    char phone_arr[PH_MAX] = {0}; 

    //reading into array

    printf("Enter phone number:");
    while(((ch = getchar()) != '\n') && i < PH_MAX){
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - 'a' + 'A';
        }
        phone_arr[i] = ch;
        i++;
    }

    //updating array
     for (int j = 0; j < sizeof(phone_arr)/sizeof(phone_arr[0]); j++){
        switch (phone_arr[j])
        {
        case 65: case 66: case 67:
            phone_arr[j] = 50;
            break;
        case 68: case 69: case 70:
            phone_arr[j] = 51;
            break;
        case 71: case 72: case 73:
            phone_arr[j] = 52;
            break;
        case 74: case 75: case 76:
            phone_arr[j] = 53;
            break;
        case 77: case 78: case 79:
            phone_arr[j] = 54;
            break;
        case 80: case 81: case 82:
            phone_arr[j] = 55;
            break;
        case 83: case 84: case 85:
            phone_arr[j] = 56;
            break;
        case 86: case 87: case 88:
            phone_arr[j] = 57;
            break;
        default:
            break;
        }
     }   
 

    //printing array
    printf("In numeric form:");
    for (int j = 0; j < sizeof(phone_arr)/sizeof(phone_arr[0]); j++){
        printf("%c", phone_arr[j]);
    }

    return 0;
}

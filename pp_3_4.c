#include <stdio.h>

int main(void){

    int state, area, phone;

    printf("Eneter phone number: [ (xxx) xxx-xxxx ] :");
    scanf("(%d) %d-%d", &state, &area, &phone);

    printf("You entered: %d.%d.%d", state, area, phone);

    return 0;
}
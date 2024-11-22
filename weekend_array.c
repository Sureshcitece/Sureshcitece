#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool weekend[] = {[0] = 1, [6] = 1};
    for(int i = 0; i < sizeof(weekend)/sizeof(weekend[i]); i++)
        printf("%d\n", weekend[i]);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main(void){

    long num;
    bool digits[10] = {false};
    int d;

    printf("Program to find if entered number has repeated digits.\n");
    printf("Enter a number:");
    scanf("%ld", &num);

    while(num > 0){
        d = num % 10;
        if(digits[d]) printf("%d\n", d);
        digits[d] = true;
        num /= 10;
    }

    for(int i = 0; i < 10; i++)
        printf("%d\t%d\n",i, digits[i]);

    return 0;
}

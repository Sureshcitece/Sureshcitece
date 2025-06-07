#include <stdio.h>

/*program to get number of digits in integer*/

int num_digits(int n){
    int digits = 0;
    while (n!=0){
        n = n / 10;
        ++digits;
    }
    
    return digits; 
}

int main(){
    int num;
    printf("Enter an integer to find number of digits:\n");
    scanf("%d", &num);
    printf("Number of digits: %d", num_digits(num));
}
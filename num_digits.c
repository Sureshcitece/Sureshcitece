#include <stdio.h>

int num_digits(long n){
    int count = 0;
    if (n == 0) return 1;
    while (n != 0){
        n /= 10;
        ++count;
    }
    return count;
}

int main(void){
    long number = 0;
    printf("Program to find number of digits entered:\n");
    printf("Enter a number:");
    scanf("%ld", &number);
    printf("Number of digits in %ld : %d\n", number, num_digits(number));
    return 0;
}
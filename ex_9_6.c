#include <stdio.h>

/* function to get number in specified digit*/

int num_digits(int n){
    int digits = 0;
    while (n!=0){
        n = n / 10;
        ++digits;
    }
    
    return digits; 
}

int digit(int n, int k){
    int num_d = num_digits(n);
    int numbers[num_d];
    for (int i=0; i<num_d; i++){
        numbers[i] = n%10;
        n = n/10;
    }

    return k>num_d? 0 : numbers[k-1];
}


int main(){
    int n, k;
    printf("Enter a number and digit space:\n");
    scanf("%d%d", &n, &k);
    printf("Digit at %d place is %d", k, digit(n,k));
    return 0;
}
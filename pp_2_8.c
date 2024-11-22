#include <stdio.h>

int main(){
    printf("Program to show monthly balance in loan for 3 months.\n");

    float balance,roi, m_payment, m_interest;

    printf("Enter amount of loan:");
    scanf("%f", &balance);

    printf("Enter of rate of interest:");
    scanf("%f", &roi);

    printf("Enter monthly payment:");
    scanf("%f", &m_payment);

    m_interest = roi/1200;

    for(int i = 1; i < 4; i++){
        balance = balance - m_payment + m_interest * balance;
        printf("Balance after %d payment:%.2f\n\a", i, balance);
    }

    return 0;
}
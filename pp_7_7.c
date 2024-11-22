//program to add subtract multiply divide fractions

#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;
    char oper;
    printf("Enter 2 fractions seperated by operand (+ - * /):");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &oper, &num2, &denom2);

    switch (oper)
    {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        break;
    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        break;
    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        break;
    case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        break;
    default:
        break;
    }

    printf("Result is: %d / %d", result_num, result_denom);

    return 0;
}
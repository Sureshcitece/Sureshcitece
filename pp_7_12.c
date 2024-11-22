//program to evalute expression with multiple operands

#include <stdio.h>

int main(void){
    float operand, result; char operator;

    printf("Enter an expression:");
    scanf("%f", &result);

    while((operator = getchar()) != '\n'){
        switch (operator)
        {
        case '+':
            scanf("%f", &operand);
            result += operand;
            break;
        case '-':
            scanf("%f", &operand);
            result -= operand;
            break;
        case '*':
            scanf("%f", &operand);
            result *= operand;
            break;
        case '/':
            scanf("%f", &operand);
            result /= operand;
            break;
        default:
            break;
        }
    }

    printf("Value of expression: %f", result);
}
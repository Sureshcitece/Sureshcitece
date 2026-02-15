//tax calculation based on new regime
#include <stdio.h>

float calculate_due(float taxable_income){
    float tax_payable = 0;

    if(taxable_income > 2400000) 
        tax_payable = calculate_due(2400000) + .30f * (taxable_income - 2400000);

    if(taxable_income > 2000000 && taxable_income <= 2400000)
        tax_payable = calculate_due(2000000) + .25f * (taxable_income - 2000000);

    if(taxable_income > 1600000 && taxable_income <= 2000000)
        tax_payable = calculate_due(1600000) + .20f * (taxable_income - 1600000);

    if(taxable_income > 1200000 && taxable_income <= 1600000)
        tax_payable = calculate_due(1200000) + .15f * (taxable_income - 1200000);

    if(taxable_income > 800000 && tax_payable <= 1200000)
        tax_payable = calculate_due(800000) + .10f * (taxable_income - 800000);

    if(taxable_income > 400000 && taxable_income <= 800000)
        tax_payable = calculate_due(400000) + .05f * (taxable_income - 400000);
    
    if(taxable_income <= 400000)
        tax_payable = 0;
        
    return tax_payable;
}

int main(void){
    float taxable_income;
    printf("Enter taxable income:");
    scanf("%f", &taxable_income);

    printf("Tax payable: Rs. %.2f", calculate_due(taxable_income));

    return 0;
}
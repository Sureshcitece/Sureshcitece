//calculate income tax

#include <stdio.h>

int main(void){

    float  taxable_income,tax_payable = 0;

    printf("Enter taxable income:");
    scanf("%f", &taxable_income);

    if(taxable_income > 1500000) 
        tax_payable = 262500 + .30f * (taxable_income - 1500000);
    else if(taxable_income > 1250000)
        tax_payable = 187500 + .30f * (taxable_income - 1250000);
    else if(taxable_income > 1000000)
        tax_payable = 112000 + .30f * (taxable_income - 1000000);
    else if(taxable_income > 750000)
        tax_payable = 62500 + .20f * (taxable_income - 750000);
    else if(taxable_income > 500000)
        tax_payable = 12500 + .20f * (taxable_income - 500000);
    else if(taxable_income > 250000)
        tax_payable = .05f * taxable_income;

    printf("Tax payable: Rs. %.2f", tax_payable);

    return 0;
}
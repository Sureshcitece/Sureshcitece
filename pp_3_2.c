#include <stdio.h>

int main(void){

    int item_no, d, m, y;
    float u_price;

    printf("Enter item number:");
    scanf("%d", &item_no);

    printf("Enter unit price:");
    scanf("%f", &u_price);

    if(u_price > 9999.99) { printf("Entered price breaches Unit price limit of 9999.99"); return 1;}

    printf("Enter purchase date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-8d\t$%8.2f\t%.2d/%.2d/%d", item_no, u_price, d, m, y);

    return 0;
}
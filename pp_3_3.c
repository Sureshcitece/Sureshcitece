#include <stdio.h>

int main(void){
    
    int gsi, group_id, pub_code, item_num, chk_digit;

    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &gsi, &group_id, &pub_code, &item_num, &chk_digit);

    printf("GSI Prefix: %d\n", gsi);
    printf("Group Identifier: %d\n", group_id);
    printf("Publisher Code: %d\n", pub_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d", chk_digit);

    return 0;
}
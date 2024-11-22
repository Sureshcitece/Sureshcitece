/*program to print month calendat with # of days and starting day*/

#include <stdio.h>

int main(void){

    int num_days, starting_day;

    printf("Enter number of days in month:");
    scanf("%d", &num_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &starting_day);

    int x = starting_day;

    while(x > 1){
        printf("   ");
        --x;
    }
    for(int i = 1; i <= num_days; i++){
        printf("%3d", i);
        ++starting_day;
        if(starting_day > 7) {
            printf("\n");
            starting_day = 1;  
        }
    }

    return 0;
}
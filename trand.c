#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, seed;

    char *p = getenv("PATH");
    printf(p);
    system("dir");

    for(;;){
        for(int i=0; i<5; i++)
            printf("%d ", rand());
        printf("\nEnter seed value:");
        scanf("%d", &seed);
        if(seed == 0)
            break;
        srand(seed);
    }
    return 0;
}
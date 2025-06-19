#include <stdio.h>

float compute_GPA(char grades[], int n){
    float sum = 0;
    for(int i=0; i<n; i++){
        switch (grades[i])
        {
        case 'A': case 'a':
            sum += 4;
            break;
        case 'B': case 'b':
            sum += 3;
            break;
        case 'C': case 'c':
            sum += 2;
            break;
        case 'D': case 'd':
            sum += 1;
            break;         
        default:
            break;
        }
    }

    return sum/n;
}

int main(){
    char grades[] = {'A', 'b', 'A', 'c', 'A', 'A', 'd', 'A', 'd'};
    printf("GPA: %f", compute_GPA(grades, sizeof(grades)/sizeof(grades[0])));
    return 0;
}
#include <stdio.h>

float compute_GPA(char grades[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++){
        switch (grades[i])
        {
        case 'A':
            sum += 4;
            break;
        case 'B':
            sum += 3;
            break;
        case 'C':
            sum += 2;
            break;
        case 'D':
            sum += 1;
            break;
        case 'F':
            sum += 0;
            break;
        default:
            break;
        }
    }

    return sum/n;

}

int main(void){
    
    int n = 0;

    printf("Program to calcualte gpa when grades entered.\n");
    
    printf("Enter number of grades:");
    scanf("%d", &n);

    char grades[n];
    printf("Enter grades of student (A = 4, B = 3, C = 2, D = 1, F = 0):");
    for (int i = 0; i < n; i++){
        scanf("%c", &grades[i]);
    }
    
    printf("GPA: %.2f\n", compute_GPA(grades, n));

    return 0;
}
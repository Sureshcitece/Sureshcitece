#include <stdio.h>

int main(void){
    int area_code;
    printf("Enter the area code:");
    scanf("%d", &area_code);

    switch (area_code)
    {
    case 422:
        printf("Code belongs to - Coimbatore\n");
        break;
    case 424:
        printf("Code belongs to - Erode\n");
        break;
    case 452:
        printf("Code belongs to - Madurai\n");
        break;
    case 423:
        printf("Code belongs to - Ooty\n");
        break;
    case 421:
        printf("Code belongs to - Tirupur\n");
        break;
    case 413:
        printf("Code belongs to - Pondichery\n");
        break;
    case 431:
        printf("Code belongs to - Trichy\n");
        break;
    case 427:
        printf("Code belongs to - Salem\n");
        break;
    case 435:
        printf("Code belongs to - Kumbakonam\n");
        break;
    case 416:
        printf("Code belongs to - Vellore\n");
        break;
    default:
        printf("Area code not recognized\n");
        break;
    }

    return 0;
}
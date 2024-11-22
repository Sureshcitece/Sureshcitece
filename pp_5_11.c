//program to convert number to english word

#include <stdio.h>

int main(void){
    int num_input;

    printf("Enter a two-digit number:");
    scanf("%d", &num_input);

    if(num_input < 10 || num_input > 99){
        printf("Invalid number.");
        return 0;
    }

    printf("You entered the number ");

   switch (num_input)
    {
    case 10:
        printf("ten.");
        return 0;
    case 11:
        printf("eleven.");
        return 0;
    case 12:
        printf("twelve.");
        return 0;
    case 13:
        printf("thirteen.");
        return 0;
    case 14:
        printf("fourteen.");
        return 0;
    case 15:
        printf("fifteen.");
        return 0;
    case 16:
        printf("sixteen.");
        return 0;
    case 17:
        printf("seventeen.");
        return 0;
    case 18:
        printf("eighteen.");
        return 0;
    case 19:
        printf( "nineteen.");
        return 0;
    default:
        break;
    }

    switch (num_input / 10)
    {
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
    default:
        break;
    }

    switch (num_input % 10)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven.");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;
        
    default:
        break;
    }

    printf(".");
    return 0;

}
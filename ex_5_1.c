#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, j, k, n, age;

    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n", k); // 1

    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j); // 1

    i = 10; j = 5;
    printf("%d\n", !i < j); //1

    i = 2; j = 1;
    printf("%d\n", !!i + !j); //1

    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k); // 1

    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k); // 1

    i = 3; j = 4; k = 5;
    printf("%d\n", i < j || ++j < k); // 1
    printf("%d %d %d\n", i, j, k); // 3, 4, 5

    i = 7; j = 8; k = 9;
    printf("%d\n", i - 7 && ++j < k); // 0
    printf("%d %d %d\n", i, j, k); // 7, 8, 9 

    printf("%d\n", (i = j) || (j = k)); //1
    printf("%d %d %d\n", i, j, k); //8, 8, 9  

    i = j = k = 1;
    printf("%d\n", ++i || ++j && ++k); // 1
    printf("%d %d %d\n", i, j, k);// 2, 2, 2

    if(0 == 1 - 10)
        printf("n is between 1 and 10\n");

    i = 17;
    printf("%d\n", i >= 0 ? i : -i);

    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    //5.4
    i = 5, j = 2;
    printf("ex_5_4: %d\n", (i > j) - (i < j));

    //5.5
    n = 0;
    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    //5.6
    n = 5;
    if(n == 1-10)
        printf("ex_5_6 - n is between 1 and 10\n");

    age = 19;
    printf("age %d is/is not teen: %d\n", age, age < 13 ? false : (age >= 13) && (age <= 19));

    //5.10
    printf("ex_5.10\n");
    i = 1;
    switch(i % 3){
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }

    return 0;
}
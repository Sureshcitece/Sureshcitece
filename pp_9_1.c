#include <stdio.h>

int largest(int a[], int n){
    int largest = a[0];
    for(int i=0; i<n; i++){
        if(a[i] > largest) largest=a[i];
    }
    return largest;
}

void selection_sort(int a[], int n){
    a[0] = a[n-1];
    a[n-1] = largest(a, n);
    if (n > 0) selection_sort(a, n - 1);
}

int main(void){
    int i, n;
    printf("Enter how many numbers you want to enter:");
    scanf("%d", &n);
    int a[n];
    printf("Enter numbers:");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selection_sort(a, n);
}
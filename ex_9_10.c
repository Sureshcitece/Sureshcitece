#include <stdio.h>

int largest(int a[], int n){
    int largest = a[0];
    for(int i=0; i<n; i++){
        if(a[i] > largest) largest=a[i];
    }
    return largest;
}

int average(int a[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum/n;
}

int num_positives(int a[], int n){
    int positives = 0;
    for (int i = 0; i<n; i++)
        if(a[i] >= 0) positives++;

    return positives;
}

int main(){
    int a[] = {1, -2, 3, 450, 5};
    printf("Largest:%d\nAverage:%d\nPositives:%d\n", largest(a, sizeof(a)/sizeof(a[0])), average(a, sizeof(a)/sizeof(a[0])), num_positives(a, sizeof(a)/sizeof(a[0])));
    return 0;
}
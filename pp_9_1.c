#include <stdio.h>

void selection_sort(int arr[], int n){
    if (n <= 1)
        return;
    int largest = arr[0]; int largest_index = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] > largest) {
            largest = arr[i];
            largest_index = i;
        }
    }
    arr[largest_index] = arr[n-1];
    arr[n-1] = largest;

    selection_sort(arr, --n);
}

int main(void){

    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    selection_sort(array, n);
    
    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
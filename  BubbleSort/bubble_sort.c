#include <stdio.h>
#include <stdlib.h>

void BubbleSort( int arr[], int n){
    int i, j, temp;

    for( i=0; i < n-1; i++){
        for( j=0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                //swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*
Sample for output:

void printArray(int arr[], int n){
    int k;
    for (k=0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
}
 
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}

Time Complexity : O(n^2)
*/
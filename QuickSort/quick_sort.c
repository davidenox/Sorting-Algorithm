#include <stdlib.h>
#include <stdio.h>

void QuickSort(int arr[], int low, int high){
    int i, j, pivot, temp;
    if( low < high ){
        i = pivot = low;
        j = high;
        
        while (i < j) {
            while(arr[i] <= arr[pivot] && i < high){
                i++;
            }
            while(arr[j] > arr[pivot]){
                j--;
            }
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        QuickSort(arr, low, j-1);
        QuickSort(arr, j+1, high);
    }
}
/*
Sample for Output:

void printArray(int arr[], int n){
    int k;
    for (k=0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
}
 
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}

Time Complexity : 
- Worst : O(n^2)
- Average : O(n*log(n))
*/

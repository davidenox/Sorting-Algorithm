#include <stdlib.h>
#include <stdio.h>
// O(n^2)
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int arr[], int n){
    int i, j, min;
    for( i = 0 ; i < n - 1 ; i++){
        min = i;
        for (j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i)
            swap(&arr[min], &arr[i]);
    }
}

/* Sample for output:

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
*/
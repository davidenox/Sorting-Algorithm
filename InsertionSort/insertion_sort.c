#include <stdio.h>
#include <stdlib.h>

void InsertionSort( int arr[], int n){
    int i, j, stored;
    for (i = 1; i<n ; ++i) {
        stored = arr[i];
        j = i - 1;
        while (j >=0 && arr[j] > stored ) {
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j + 1 ] = stored;
    }
}

/* Sample for output:

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    printArray(arr, n);
    return 0;
}

Time Complexity : O(n^2)
*/
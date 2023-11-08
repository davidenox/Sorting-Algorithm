def BubbleSort(arr):
    n = len(arr)

    for i in range(0, n-1):
        for j in range(0, n-1):
            if( arr[j] > arr[j + 1]):
               arr[j], arr[j+1] = arr[j+1], arr[j]

'''
Sample for output:

arr = [ 7,2,4,5,3,1]
BubbleSort(arr)
print(arr)

Time Complexity : O(n^2)
'''
def InsertionSort(arr):
    n = len(arr)

    for i in range(1, n):
        stored = arr[i]
        j = i - 1
        while (j >=0 and arr[j] > stored):
            arr[j + 1] = arr[j]
            j -= 1
        arr[j+1] = stored

'''
Sample for output:

a = [7, 2, 4, 5, 3, 1]
print(IntertionSort(a))

Time Complexity : O(n^2)
'''
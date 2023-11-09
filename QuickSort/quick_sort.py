# First of all, build the Partition function

def Partition(arr, low, high):
    pivot = arr[high]  # choose last element as pivot
    i = low - 1 # pointer for the greater element
    
    for j in range(low, high):
        if(arr[j]<= pivot):
            i += 1
            (arr[i], arr[j])=(arr[j], arr[i])
    (arr[i+1], arr[high]) = (arr[high], arr[i+1])
    return i+1

# now the quicksort

def QuickSort(arr, low, high):
    if low < high:
        pi = Partition(arr, low, high)
        QuickSort(arr, low, pi-1)
        QuickSort(arr, pi + 1, high)

'''
Sample for output:

arr = [37,42,9,56,8,12,3,23]
QuickSort(arr,0,len(arr)-1)
print(arr)

Time Complexity : 
- Worst : O(n^2)
- Average : O(n*log(n))
'''

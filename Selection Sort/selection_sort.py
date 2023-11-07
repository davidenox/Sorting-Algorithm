#O(n^2)
def SelectionSort(A, size):
    for i in range(size):
        min = i
        for j in range(i+1, size):
            if A[j] < A[min]:
                min = j
        (A[i],A[min]) = (A[min],A[i])

'''
Sample for output:

seq = [7,2,4,5,3,1]
len = len(seq)
SelectionSort(seq, len)
print(seq)

'''
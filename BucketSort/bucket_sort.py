def BucketSort(arr):

    bucket = [] # Create the empty bucket
    n = len(arr)
    for i in range(n):
        bucket.append([])
    
    for j in arr:
        key = int(j)
        bucket[key].append(j)

    # Sort the elements of each bucket
    for i in range(len(arr)):
        bucket[i] = sorted(bucket[i])

    # Get the sorted elements
    k = 0
    for i in range(len(arr)):
        for j in range(len(bucket[i])):
            arr[k] = bucket[i][j]
            k += 1
    return arr

array = [5.42, 3.14, 2.91, 9.81, 0.76, 0.91, 1.61]
print(BucketSort(array))
    



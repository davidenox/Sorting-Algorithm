def MergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2

        sx = arr[:mid]
        dx = arr[mid:]
        MergeSort(sx)
        MergeSort(dx)

        a = b = c = 0
        while a < len(sx) and b < len(dx):
            if sx[a] < dx[b]:
                arr[c] = sx[a]
                a += 1
            else:
                arr[c] = dx[b]
                b += 1
            c += 1

        while a < len(sx):
            arr[c] = sx[a]
            a += 1
            c += 1
        while b < len(dx):
            arr[c] = dx[b]
            b += 1
            c += 1

    return arr

'''
Sample for output:

arr = [1, 7, 3, 8, 5, 9, 2, 5]
sorted_arr = MergeSort(arr)
print(sorted_arr)

Time Complexity : O(n*log(n))
'''
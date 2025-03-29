def kth_min_max(arr, k):
    arr.sort()
    return arr[k-1], arr[-k]

arr = [7, 10, 4, 3, 20, 15]
k = 3
print(kth_min_max(arr, k))  # Output: (7, 10)

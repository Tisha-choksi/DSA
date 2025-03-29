def union_intersection(arr1, arr2):
    union = list(set(arr1) | set(arr2))
    intersection = list(set(arr1) & set(arr2))
    return union, intersection

arr1 = [1, 2, 3, 4, 5]
arr2 = [3, 4, 5, 6, 7]
print(union_intersection(arr1, arr2))  
# Output: ([1, 2, 3, 4, 5, 6, 7], [3, 4, 5])

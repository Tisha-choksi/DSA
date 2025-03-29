def find_duplicates(arr):
    seen, duplicates = set(), set()
    for num in arr:
        if num in seen:
            duplicates.add(num)
        seen.add(num)
    return list(duplicates)

arr = [1, 2, 3, 1, 4, 5, 3]
print(find_duplicates(arr))  # Output: [1, 3]

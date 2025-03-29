def missing_number(arr, n):
    total = (n * (n + 1)) // 2  # Sum of first n natural numbers
    return total - sum(arr)

arr = [1, 2, 4, 5, 6]  # n=5
print(missing_number(arr, 6))  # Output: 3

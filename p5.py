def move_negatives(arr):
    left = 0
    for right in range(len(arr)):
        if arr[right] < 0:  # If negative number found
            arr[left], arr[right] = arr[right], arr[left]  # Swap
            left += 1  # Move the left pointer
    return arr

arr = [1, -2, 3, -4, 5, -6, 7, -8]
print(move_negatives(arr))  # Output: [-2, -4, -6, -8, 5, 3, 7, 1]

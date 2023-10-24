#14 
def find_max_min(arr, start, end):
    if start == end:
        return arr[start], arr[start]

    mid = (start + end) // 2

    max1, min1 = find_max_min(arr, start, mid)
    max2, min2 = find_max_min(arr, mid + 1, end)

    maximum = max(max1, max2)
    minimum = min(min1, min2)

    return maximum, minimum

arr = [3, 7, 1, 9, 4, 6, 2, 8, 5]
n = len(arr)

maximum, minimum = find_max_min(arr, 0, n - 1)

print("Maximum Element:", maximum)
print("Minimum Element:", minimum)

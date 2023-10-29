def quicksort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[0]
        less = [x for x in arr[1:] if x >= pivot]
        greater = [x for x in arr[1:] if x < pivot]
        return quicksort(greater) + [pivot] + quicksort(less)

my_list = []

# Input number
while True:
    user_input = input("Enter numbers (Press Enter to stop): ")
    if user_input == "":
        break
    try:
        number = int(user_input)
        my_list.append(number)
    except ValueError:
        print("Please type integers.")

sorted_list = quicksort(my_list)
print("Elements list of an array in descending order:", sorted_list)
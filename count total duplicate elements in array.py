def count_duplicate_elements(array):
    """
    Counts the total number of duplicate elements in the given array.

    Args:
        array: A list of integers.

    Returns:
        The total number of duplicate elements in the given array.
    """

    count = 0

    seen = set()

    for element in array:
        if element in seen:
            count += 1
        else:
            seen.add(element)

    return count



# Example usage:

array = [1, 2, 3, 4, 2, 7, 8, 8, 3]
count_duplicate_elements = count_duplicate_elements(array)
print(count_duplicate_elements)

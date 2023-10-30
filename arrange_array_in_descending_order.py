def arrange_array_in_descending_order(array):
    """
    Arranges the elements of an array in descending order.

    Args:
        array: A list or NumPy array.

    Returns:
        A list or NumPy array with the elements arranged in descending order.
    """

    if isinstance(array, list):
        array.sort(reverse=True)
        return array
    elif isinstance(array, np.ndarray):
        return np.sort(array)[::-1]
    else:
        raise TypeError("Input array must be a list or NumPy array.")



# Example usage:

array = [5, 3, 2, 1, 4]
print(arrange_array_in_descending_order(array))

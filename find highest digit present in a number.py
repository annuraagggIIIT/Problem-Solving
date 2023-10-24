def highest_digit(number):

    """
    Returns the highest digit present in the given number.

    Args:
        number: A positive integer.

    Returns:
        The highest digit in the given number.
    """

    highest = 0

    while number > 0:
        digit = number % 10
        if digit > highest:
            highest = digit
        number //= 10
        
    return highest



# Example usage:

number = 12345
highest_digit = highest_digit(number)
print(highest_digit)

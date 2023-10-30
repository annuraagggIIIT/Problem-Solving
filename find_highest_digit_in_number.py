def find_highest_digit_in_number(number):
    """Finds the highest digit present in a number.

    Args:
        number: An integer.

    Returns:
        The highest digit present in the number.
    """

    highest_digit = 0

    while number > 0:
        digit = number % 10

        if digit > highest_digit:
            highest_digit = digit

        number //= 10

    return highest_digit



# Example usage:

number = 12345
highest_digit = find_highest_digit_in_number(number)
print(f"The highest digit in the number {number} is {highest_digit}.")

def common_factors(a, b):
    """
    Returns a list of the common factors of a and b.

    Args:
        a: A positive integer.
        b: A positive integer.

    Returns:
        A list of the common factors of a and b.
    """

    factors = []

    for i in range(1, min(a, b) + 1):
        if a % i == 0 and b % i == 0:
            factors.append(i)

    return factors



# Example usage:

a = 12
b = 18
common_factors = common_factors(a, b)
print(common_factors)

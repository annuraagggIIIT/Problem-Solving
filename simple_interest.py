def simple_interest(principal, rate, time):
    """
    Calculates the simple interest given principal, rate, and time.

    Args:
        principal: The principal amount.
        rate: The interest rate in percentage.
        time: The time period in years.

    Returns:
        The simple interest.
    """

    si = (principal * rate * time) / 100


    return si




# Example usage:

principal = 10000
rate = 5
time = 2

simple_interest = simple_interest(principal, rate, time)

print("The simple interest is:", simple_interest)

import math

def is_perfect_square(number):
    # Check if the square root of the number is an integer
    square_root = math.isqrt(number)
    return square_root * square_root == number

# Input a number to check for perfect square
number = int(input("Enter a number: "))

if is_perfect_square(number):
    print(f"{number} is a perfect square.")
else:
    print(f"{number} is not a perfect square.")
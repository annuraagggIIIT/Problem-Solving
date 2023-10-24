def is_palindrome(input_string):
    # Remove spaces and convert the input str
    cleaned_string = input_string.replace(" ", "").lower()
    
    # Reverse the cleaned string
    reversed_string = cleaned_string[::-1]
    
    # Check if the cleaned string is the same as its reverse
    return cleaned_string == reversed_string


user_input = input("Enter a string: ")

if is_palindrome(user_input):
    print(f"'{user_input}' is a palindrome.")
else:
    print(f"'{user_input}' is not a palindrome.")

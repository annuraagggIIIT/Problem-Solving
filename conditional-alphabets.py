# Input a character
character = input("Enter a character: ")

# Use a conditional operator to check if it's an alphabet
is_alphabet = True if ('a' <= character <= 'z' or 'A' <= character <= 'Z') else False

# Display the result
if is_alphabet:
    print(f"'{character}' is an alphabet.")
else:
    print(f"'{character}' is not an alphabet.")